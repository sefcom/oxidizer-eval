void __rustcall uu_ls::show_dir_name(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uucore::features::quoting_style::escape_dir_name
            (&local_68,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             param_3 + 0xf5);
  if (*(char *)(param_3 + 0xee) == '\0' && *(char *)(param_3 + 0xef) != '\0') {
                    /* try { // try from 00226fe3 to 00226ff2 has its CatchHandler @ 002270da */
    create_hyperlink(&local_88,CONCAT44(uStack_5c,uStack_60),local_58,param_1);
    local_90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_50 = &DAT_00312550;
    local_48 = 2;
    local_30 = 0;
    local_38 = 1;
                    /* try { // try from 00227032 to 00227046 has its CatchHandler @ 002270df */
    local_98 = &local_88;
    local_40 = (undefined *)&local_98;
    uVar1 = std::io::Write::write_fmt(param_2,&local_50);
    core::result::Result<T,E>::unwrap(uVar1);
                    /* try { // try from 00227047 to 00227050 has its CatchHandler @ 002270da */
    core::ptr::drop_in_place<alloc::string::String>(&local_88);
    puVar2 = &local_68;
  }
  else {
    local_78 = local_58;
    local_88 = local_68;
    uStack_84 = uStack_64;
    uStack_80 = uStack_60;
    uStack_7c = uStack_5c;
    local_98 = &local_88;
    local_90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_50 = &DAT_00312550;
    local_48 = 2;
    local_30 = 0;
    local_38 = 1;
                    /* try { // try from 002270b0 to 002270c4 has its CatchHandler @ 002270df */
    local_40 = (undefined *)&local_98;
    uVar1 = std::io::Write::write_fmt(param_2,&local_50);
    core::result::Result<T,E>::unwrap(uVar1);
    puVar2 = &local_88;
  }
  core::ptr::drop_in_place<alloc::string::String>(puVar2);
  return;
}