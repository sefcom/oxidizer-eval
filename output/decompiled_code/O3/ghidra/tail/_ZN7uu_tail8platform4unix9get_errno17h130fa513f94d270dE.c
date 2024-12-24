ulong __rustcall uu_tail::platform::unix::get_errno(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char local_28 [4];
  uint local_24;
  
  uVar1 = std::sys::pal::unix::os::errno();
  uVar3 = (ulong)uVar1 << 0x20 | 2;
  std::io::error::repr_bitpacked::decode_repr(local_28,uVar3);
  if (local_28[0] == '\0') {
    core::ptr::drop_in_place<std::io::error::Error>(uVar3);
    return (ulong)local_24;
  }
                    /* try { // try from 0022093a to 00220946 has its CatchHandler @ 00220947 */
  uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_platform_unix_rs_002bf070);
                    /* catch() { ... } // from try @ 0022093a with catch @ 00220947 */
                    /* try { // try from 0022094a to 00220951 has its CatchHandler @ 0022095a */
  core::ptr::drop_in_place<std::io::error::Error>(uVar3);
  uVar3 = _Unwind_Resume(uVar2);
  return uVar3;
}