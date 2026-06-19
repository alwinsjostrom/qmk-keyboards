// Chordal Hold: handedness per tangent
// 'L' = vänster hand, 'R' = höger hand, '*' = undantag (håll tillåts alltid).
// Tummarna är '*' så att layer-tap-håll funkar direkt även mot samma hand.
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_split_3x6_3(
  'L', 'L', 'L', 'L', 'L', 'L',     'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L',     'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L',     'R', 'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*',     '*', '*', '*'
);
