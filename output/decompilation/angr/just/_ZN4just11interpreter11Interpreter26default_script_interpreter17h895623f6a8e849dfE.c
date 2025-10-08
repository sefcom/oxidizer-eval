long long just::interpreter::Interpreter::default_script_interpreter()
{
    return std::sync::poison::once::Once::call_once();
}
