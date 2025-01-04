undefined8 __rustcall uu_dd::Dest::truncate(char *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  if (*param_1 != '\x01') {
    return 0;
  }
  auVar2 = _<std::fs::File_as_std::io::Seek>::seek(param_1 + 4,2,0);
  if (auVar2._0_8_ != 0) {
    return auVar2._8_8_;
  }
  uVar1 = std::fs::File::set_len(param_1 + 4,auVar2._8_8_);
  return uVar1;
}