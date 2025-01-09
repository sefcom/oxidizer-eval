void __rustcall
uu_realpath::resolve_path
          (undefined8 param_1,undefined8 param_2,undefined param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9)

{
  long lVar1;
  undefined local_61;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [24];
  
  uucore::features::fs::canonicalize(&local_60,param_1,param_2,param_5,param_4);
  if (local_60 != -0x8000000000000000) {
    local_48 = local_60;
    local_40 = local_58;
    local_38 = local_50;
    process_relative(local_30,&local_48,param_8,param_9,param_6,param_7);
    lVar1 = uucore::mods::display::print_verbatim(local_30);
    if (lVar1 == 0) {
      local_60 = std::io::stdio::stdout();
      local_61 = param_3;
      _<std::io::stdio::Stdout_as_std::io::Write>::write_all(&local_60,&local_61,1);
    }
  }
  return;
}