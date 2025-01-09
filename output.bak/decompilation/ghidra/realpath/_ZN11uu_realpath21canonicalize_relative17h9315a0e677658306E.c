void __rustcall
uu_realpath::canonicalize_relative(long *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  char cVar2;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  char local_48;
  undefined7 uStack_47;
  long local_40;
  long local_38;
  char local_30;
  
  uucore::features::fs::canonicalize(&local_50);
  lVar1 = CONCAT71(uStack_47,local_48);
  if (local_50 == -0x8000000000000000) {
    param_1[1] = lVar1;
    *param_1 = -0x8000000000000000;
  }
  else {
    local_68 = local_50;
    local_58 = local_40;
    local_60 = lVar1;
                    /* try { // try from 001b6889 to 001b68a8 has its CatchHandler @ 001b6901 */
    if ((param_4 == '\x01') && (cVar2 = std::path::Path::is_dir(lVar1,local_40), cVar2 == '\0')) {
      std::fs::read_dir(&local_50,lVar1,local_40);
      if (local_48 == '\x02') {
        param_1[1] = local_50;
        *param_1 = -0x8000000000000000;
        core::ptr::drop_in_place<std::path::PathBuf>(&local_68);
        return;
      }
      local_38 = local_50;
      local_30 = local_48;
                    /* try { // try from 001b68d1 to 001b68da has its CatchHandler @ 001b6901 */
      core::ptr::drop_in_place<std::fs::ReadDir>(&local_38);
    }
    param_1[2] = local_58;
    *param_1 = local_68;
    param_1[1] = local_60;
  }
  return;
}