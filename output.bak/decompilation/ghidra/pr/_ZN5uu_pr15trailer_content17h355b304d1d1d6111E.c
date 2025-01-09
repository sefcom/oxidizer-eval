void __rustcall uu_pr::trailer_content(undefined8 *param_1,char param_2,char param_3)

{
  undefined8 *puVar1;
  
  if ((param_2 != '\0') && (param_3 == '\0')) {
    puVar1 = (undefined8 *)::alloc::alloc::Global::alloc_impl(8,0x78);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 1;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 1;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 1;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 1;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 1;
      puVar1[0xe] = 0;
      ::alloc::slice::hack::into_vec(param_1,puVar1,5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,0x78);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return;
}