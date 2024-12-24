ulong __rustcall uu_rm::prompt_dir(undefined8 param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulong uVar2;
  int local_d0 [14];
  undefined4 local_98;
  
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  if (param_3 == '\0') {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    std::fs::metadata(local_d0,param_1,param_2);
    uVar2 = CONCAT71(uVar3,1);
    if (local_d0[0] != 2) {
                    /* try { // try from 001b8637 to 001b8645 has its CatchHandler @ 001b8666 */
      uVar1 = handle_writable_directory(param_1,param_2,param_3,local_98);
      uVar2 = (ulong)uVar1;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_d0);
  }
  return uVar2 & 0xffffffff;
}