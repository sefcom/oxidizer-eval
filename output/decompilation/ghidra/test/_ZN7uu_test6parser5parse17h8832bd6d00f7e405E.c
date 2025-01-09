int * __rustcall uu_test::parser::parse(int *param_1)

{
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  undefined local_48 [56];
  
  Parser::new(&local_60);
                    /* try { // try from 001afd57 to 001afd63 has its CatchHandler @ 001afdb6 */
  Parser::parse(&local_80,&local_60);
  if (local_80 == 7) {
    *(undefined8 *)(param_1 + 6) = local_50;
    param_1[2] = local_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = iStack_54;
    param_1[0] = 7;
    param_1[1] = 0;
    core::ptr::
    drop_in_place<core::iter::adapters::peekable::Peekable<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>
              (local_48);
  }
  else {
    param_1[4] = local_70;
    param_1[5] = iStack_6c;
    param_1[6] = iStack_68;
    param_1[7] = iStack_64;
    *param_1 = local_80;
    param_1[1] = iStack_7c;
    param_1[2] = iStack_78;
    param_1[3] = iStack_74;
    core::ptr::drop_in_place<uu_test::parser::Parser>(&local_60);
  }
  return param_1;
}