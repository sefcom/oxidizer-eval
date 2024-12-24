undefined  [16] __rustcall
uu_tail::follow::watch::Observer::add_stdin
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined param_6)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if ((*(byte *)(param_1 + 0x8e) == 2) || ((*(byte *)(param_1 + 0x8e) & 1) != 0)) {
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::BufRead>>>
              (param_4,param_5);
    uVar1 = 0;
  }
  else {
                    /* try { // try from 00216153 to 00216175 has its CatchHandler @ 002161e8 */
    std::sys::os_str::bytes::Slice::to_owned(&local_48,"/dev/stdin",10);
    local_58 = local_38;
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
                    /* try { // try from 0021618e to 002161a8 has its CatchHandler @ 002161db */
    auVar2 = add_path(param_1,CONCAT44(uStack_3c,uStack_40),local_38,param_2,param_3,param_4,param_5
                      ,param_6);
    param_5 = auVar2._8_8_;
    uVar1 = auVar2._0_8_;
    core::ptr::drop_in_place<std::path::PathBuf>(&local_68);
  }
  auVar2._8_8_ = param_5;
  auVar2._0_8_ = uVar1;
  return auVar2;
}