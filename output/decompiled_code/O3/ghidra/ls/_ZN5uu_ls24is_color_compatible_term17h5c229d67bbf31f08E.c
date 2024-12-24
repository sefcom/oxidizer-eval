undefined8 __rustcall uu_ls::is_color_compatible_term(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 *local_88;
  undefined **local_80;
  undefined local_68 [8];
  undefined8 local_60;
  long local_58;
  undefined local_50 [16];
  long local_40;
  undefined8 local_38;
  long local_30;
  
  std::env::var(&local_88,&DAT_00124220,4);
  puVar1 = local_88;
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
            (&local_88);
  std::env::var(&local_88,&DAT_00134de6,9);
  puVar2 = local_88;
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
            (&local_88);
  std::env::var(&local_88,&DAT_00124220,4);
  core::result::Result<T,E>::unwrap_or_default(local_68,&local_88);
                    /* try { // try from 0021f2b9 to 0021f2d5 has its CatchHandler @ 0021f36e */
  std::env::var(&local_88,&DAT_00134de6,9);
  core::result::Result<T,E>::unwrap_or_default(local_50,&local_88);
  if (puVar1 == (undefined1 *)0x0 && local_58 == 0) {
    if (puVar2 == (undefined1 *)0x0 && local_40 == 0) {
LAB_0021f31c:
                    /* try { // try from 0021f31c to 0021f325 has its CatchHandler @ 0021f36e */
      core::ptr::drop_in_place<alloc::string::String>(local_50);
      core::ptr::drop_in_place<alloc::string::String>(local_68);
      return 0;
    }
  }
  else if (local_58 != 0) {
    local_38 = local_60;
    local_30 = local_58;
    local_88 = anon_82c3ed8cdb07ba982e54791b0c97d0cf_64_llvm_541762227079851447;
    local_80 = &PTR_drop_in_place<uucore_mods_panic_mute_sigpipe_panic___closure__>_00316df0;
                    /* try { // try from 0021f30b to 0021f317 has its CatchHandler @ 0021f35f */
    cVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                      (&local_88,&local_38);
    if (cVar3 == '\0') goto LAB_0021f31c;
  }
                    /* try { // try from 0021f33b to 0021f344 has its CatchHandler @ 0021f36e */
  core::ptr::drop_in_place<alloc::string::String>(local_50);
  core::ptr::drop_in_place<alloc::string::String>(local_68);
  return 1;
}