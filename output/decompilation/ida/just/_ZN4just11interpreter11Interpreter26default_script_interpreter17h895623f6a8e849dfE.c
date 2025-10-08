// attributes: thunk
__int64 just::interpreter::Interpreter::default_script_interpreter()
{
  return std::sync::poison::once::Once::call_once();
}