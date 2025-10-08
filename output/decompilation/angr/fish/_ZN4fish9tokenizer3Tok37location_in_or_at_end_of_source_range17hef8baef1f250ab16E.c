char fish::tokenizer::Tok::location_in_or_at_end_of_source_range(unsigned int a0[2], unsigned int a1)
{
    return a1 - a0[0] <= a0[1] & a0[0] <= a1;
}
