long long fish::ast::<impl core::convert::From<fish::parse_constants::ParseTreeFlags> for fish::tokenizer::TokFlags>::from(unsigned int a0)
{
    return a0 * 8 & 0xffffff00 | (char)a0 * 8 & 8 | (char)((a0 & 255) >> 2) & 1 | (char)a0 & 2;
}
