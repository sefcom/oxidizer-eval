fn just::line::Line::first(a0: i64, a1: u64) -> long long {
    if !a1 {
        return 0;
    } else if *(a0 as &i32) == 18 {
        return just::token::Token::lexeme(a0 + 8);
    } else {
        return 0;
    }
}
