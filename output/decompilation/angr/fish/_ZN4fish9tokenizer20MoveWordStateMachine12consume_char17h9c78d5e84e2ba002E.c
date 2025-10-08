long long fish::tokenizer::MoveWordStateMachine::consume_char(char *a0, unsigned long long a1)
{
    unsigned int v1;  // eax

    v1 = *(a0);
    if (!v1)
    {
        return a0.consume_char_punctuation(a1);
    }
    else if (v1 == 1)
    {
        return a0.consume_char_path_components(a1);
    }
    else
    {
        return a0.consume_char_whitespace(a1);
    }
}
