undefined8 * __rustcall uu_env::string_expander::StringExpander::new(undefined8 *param_1)

{
  string_parser::StringParser::new(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return param_1;
}