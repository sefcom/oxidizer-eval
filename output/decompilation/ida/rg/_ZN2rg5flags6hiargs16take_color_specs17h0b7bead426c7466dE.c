__int64 __fastcall rg::flags::hiargs::take_color_specs(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // r14
  __int64 v5; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+8h] [rbp-50h]
  __int64 v7; // [rsp+10h] [rbp-48h]
  _QWORD v8[8]; // [rsp+18h] [rbp-40h] BYREF

  grep_printer::color::default_color_specs(&v5);
  alloc::vec::Vec<T,A>::drain(v8, a2 + 224);
  while ( 1 )
  {
    v2 = (unsigned int *)v8[0];
    if ( v8[0] == v8[1] )
      break;
    v8[0] += 6LL;
    alloc::vec::Vec<T,A>::push(&v5, *v2 | ((unsigned __int64)*((unsigned __int16 *)v2 + 2) << 32), &off_3EB1F0);
  }
  core::ptr::drop_in_place<alloc::vec::drain::Drain<grep_printer::color::UserColorSpec>>(v8);
  v3 = v6;
  grep_printer::color::ColorSpecs::new(a1, v6, v7);
  return core::ptr::drop_in_place<alloc::vec::Vec<grep_printer::color::UserColorSpec>>(v5, v3);
}