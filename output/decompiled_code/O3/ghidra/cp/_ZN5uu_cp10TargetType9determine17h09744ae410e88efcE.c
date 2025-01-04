undefined8 __rustcall
uu_cp::TargetType::determine(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  if (param_1 < 2) {
    cVar1 = std::path::Path::is_dir(param_2,param_3);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}