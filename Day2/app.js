import app from './app';

//Port for the server to run on
const port = process.env.PORT || '3000'; app.listen(port);

//Message to let user know the server is running
console.log('Listening on port ${port}');

