bool __rustcall uu_pwd::logical_path::looks_reasonable(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  char cVar3;
  bool bVar4;
  undefined8 local_2e0;
  undefined8 local_2d8;
  char local_2d0 [16];
  long local_2c0;
  long local_2b8;
  undefined2 local_2a8;
  char local_2a6;
  long local_230 [4];
  long local_210;
  long local_208;
  undefined local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  undefined local_d0 [176];
  
  std::path::Path::components(&local_2e0,param_1,param_2);
  if ((local_2a6 != '\0') || (1 < (byte)(local_2d0[0] - 5U))) {
    std::sys::os_str::bytes::Slice::to_string_lossy(local_180,param_1,param_2);
    _<core::str::pattern::MultiCharEqPattern<C>as_core::str::pattern::Pattern>::into_searcher
              (local_2d0,local_178,local_170);
    local_2e0 = 0;
    local_2d8 = local_170;
    local_2a8 = 1;
                    /* try { // try from 001a5cac to 001a5cb5 has its CatchHandler @ 001a5d9f */
    uVar2 = core::iter::traits::iterator::Iterator::try_fold(&local_2e0);
    cVar3 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar2);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_180);
    if (cVar3 == '\0') {
      std::fs::metadata(local_d0,param_1,param_2);
                    /* try { // try from 001a5cec to 001a5d04 has its CatchHandler @ 001a5d85 */
      std::fs::metadata(local_180,".",1);
      puVar1 = PTR_memcpy_0020d458;
      (*(code *)PTR_memcpy_0020d458)(&local_2e0,local_d0,0xb0);
      (*(code *)puVar1)(local_230,local_180,0xb0);
      bVar4 = false;
      if (((int)local_2e0 != 2) && (local_230[0] != 2)) {
        bVar4 = local_2b8 == local_208 && local_2c0 == local_210;
      }
      core::ptr::
      drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>
                (&local_2e0);
      return bVar4;
    }
  }
  return false;
}