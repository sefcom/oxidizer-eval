undefined8 __rustcall
uu_expr::syntax_tree::AstNode::parse(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = param_2;
  local_18 = param_3;
  Parser::parse(param_1,&local_20);
  return param_1;
}