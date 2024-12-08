        unsigned __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  bool v9; // cf
  __int128 v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-28h]

  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v11, a3);
  v6 = v12;
  if ( a2 )
  {
    while ( v6 )
    {
      v6 = <usize as core::iter::range::Step>::backward_unchecked();
      if ( v6 >= v12 )
        core::panicking::panic_bounds_check(v6, v12, &off_149760);
      if ( HIDWORD(a4) )
      {
        v7 = a4 / a2;
        v8 = a4 % a2;
      }
      else
      {
        LODWORD(v8) = (unsigned int)a4 % a2;
        v7 = (unsigned int)a4 / a2;
      }
      *(_BYTE *)(*((_QWORD *)&v11 + 1) + v6) = v8;
      v9 = a4 < a2;
      a4 = v7;
      if ( v9 )
        goto LABEL_12;
    }
  }
  else if ( v12 )
  {
    core::panicking::panic_const::panic_const_rem_by_zero(&off_149748);
  }
  if ( a4 )
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v11);
  }
  else
  {
LABEL_12:
    *(_QWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
    *(_BYTE *)(a1 + 24) = a2;
  }
  return a1;
}
