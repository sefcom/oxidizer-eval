undefined  [16] __rustcall
uu_tail::follow::watch::Observer::add_path
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined param_8)

{
  char cVar1;
  undefined8 uVar2;
  ulong unaff_R14;
  undefined auVar3 [16];
  undefined local_280 [8];
  undefined8 local_278;
  ulong local_270;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined local_d8 [168];
  
  local_268 = param_5;
  if (*(char *)(param_1 + 0x8e) == '\x02') {
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::BufRead>>>
              (param_6,param_7);
  }
  else {
                    /* try { // try from 00215f3a to 00215f95 has its CatchHandler @ 002160eb */
    cVar1 = std::path::Path::is_absolute(param_2,param_3);
    if (cVar1 == '\0') {
      std::env::current_dir(&local_260);
      if (local_260 == -0x8000000000000000) {
        auVar3 = uucore::mods::error::
                 _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                 ::from(local_258);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::BufRead>>>
                  (param_6,param_7);
        return auVar3;
      }
      local_188 = local_260;
      local_180 = local_258;
      local_178 = local_250;
                    /* try { // try from 00215fd1 to 00215fe0 has its CatchHandler @ 002160d5 */
      std::path::Path::join(local_280,local_258,local_250,param_2,param_3);
                    /* try { // try from 00215fe1 to 00215fed has its CatchHandler @ 002160eb */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_188);
    }
    else {
      std::sys::pal::unix::os::split_paths::bytes_to_path(local_280,param_2,param_3);
    }
    unaff_R14 = local_270;
    uVar2 = local_278;
                    /* try { // try from 00215ffe to 00216022 has its CatchHandler @ 002160f4 */
    std::fs::metadata(&local_260,local_278,local_270);
    if (local_260 == 2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_260);
      uVar2 = local_278;
      unaff_R14 = local_270;
    }
    else {
      (*(code *)PTR_memcpy_002c47b8)(local_d8,&local_258,0xa8);
    }
    local_188 = local_260;
    (*(code *)PTR_memcpy_002c47b8)(&local_180,local_d8,0xa8);
                    /* try { // try from 0021606c to 002160b3 has its CatchHandler @ 002160f4 */
    files::PathData::new(&local_260,param_6,param_7,&local_188,param_4,local_268);
    files::FileHandling::insert(param_1 + 0x38,uVar2,unaff_R14,&local_260,param_8);
    core::ptr::drop_in_place<std::path::PathBuf>(local_280);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = unaff_R14;
  return auVar3 << 0x40;
}