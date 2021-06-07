program PageCalc;

begin
var BeginOfPages:integer;
var EndOfPages:integer;
var PriceOfPage:integer;
var LengthOfPages: integer;

WriteLn('С какой страницы начинается ваша распечатка?');
ReadLn(BeginOfPages);
WriteLn('С какой страницы заканчивается вашат распечатка?');
ReadLn(EndOfPages);
WriteLn('Какова цена каждой страницы?');
ReadLn(PriceOfPage);

for var i := BeginOfPages to EndOfPages do
  LengthOfPages := LengthOfPages + 1;

write(LengthOfPages);
  
end.