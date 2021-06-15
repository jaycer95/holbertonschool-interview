#!/usr/bin/node

const request = require('request');
const ID = process.argv[2];

request({ url: (`https://swapi-api.hbtn.io/api/films/${ID}/`), json: true }, function (err, res, json) {
  if (err) {
    return console.log(err);
  }
  const characters = [];
  for (const k of json.characters) {
    request({ url: k, json: true }, function (err, res, json) {
      if (err) {
        return console.log(err);
      }
      const id = k.split('/')[5];
      characters[id] = json.name;
    }, 2000);
  }
  setTimeout(function () {
    json.characters.forEach(element => {
      const id = element.split('/')[5];
      console.log(characters[id]);
    });
  }, 2000);
});
