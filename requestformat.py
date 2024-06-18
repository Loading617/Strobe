GET /some-path HTTP/1.1\r\n

Host: example.com\r\n
Accept: text/html\r\n

\r\n

GET / HTTP/1.1\r\n
Host: example.com\r\n
Accept: text/html\r\n
\r\n

POST / HTTP/1.1\r\n
Host: example.com\r\n
Accept: application/json\r\n
Content-type: application/json\r\n
Content-length: 2\r\n
\r\n
{}
