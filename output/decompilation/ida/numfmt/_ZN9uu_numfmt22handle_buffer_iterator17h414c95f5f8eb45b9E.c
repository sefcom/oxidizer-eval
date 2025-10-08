__int64 __fastcall uu_numfmt::handle_buffer_iterator(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // eax
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v10; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-C8h]
  __int64 v13; // [rsp+18h] [rbp-C0h]
  void *v14; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+28h] [rbp-B0h]
  __int64 v16; // [rsp+38h] [rbp-A0h]
  __int64 v17; // [rsp+40h] [rbp-98h]
  __int128 v18; // [rsp+50h] [rbp-88h] BYREF
  char *v19; // [rsp+60h] [rbp-78h]
  __int64 (__fastcall *v20)(); // [rsp+68h] [rbp-70h]
  unsigned __int64 v21; // [rsp+70h] [rbp-68h] BYREF
  __int64 v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+80h] [rbp-58h]
  __int64 v24; // [rsp+88h] [rbp-50h]
  _BYTE v25[72]; // [rsp+90h] [rbp-48h] BYREF

  v2 = 0LL;
  v3 = 10;
  if ( *(_BYTE *)(a2 + 200) )
    v3 = 0;
  HIDWORD(v10) = v3;
  core::iter::traits::iterator::Iterator::enumerate(v25, a1);
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21, v25);
  v7 = v22;
  if ( v22 != 0x8000000000000001LL )
  {
    v8 = *(_QWORD *)(a2 + 192);
    do
    {
      if ( v7 == 0x8000000000000000LL )
      {
        v11 = v23;
        <T as alloc::string::SpecToString>::spec_to_string(&v18, &v11);
        v16 = (__int64)v19;
        v15 = v18;
        v14 = 0LL;
        v2 = alloc::boxed::Box<T>::new(&v14);
        core::ptr::drop_in_place<std::io::error::Error>(&v11);
        return v2;
      }
      if ( v21 >= v8 )
      {
        v2 = uu_numfmt::format_and_handle_validation(v23, v24, a2, v4, v5, v6, v10, v11, v12, v13, v7, v23, v24, v16);
        core::ptr::drop_in_place<alloc::string::String>(&v14);
        if ( v2 )
          return v2;
      }
      else
      {
        v11 = v7;
        v12 = v23;
        v13 = v24;
        *(_QWORD *)&v18 = &v11;
        *((_QWORD *)&v18 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v19 = (char *)&v10 + 4;
        v20 = <char as core::fmt::Display>::fmt;
        v14 = &unk_195A0;
        *(_QWORD *)&v15 = 2LL;
        v17 = 0LL;
        *((_QWORD *)&v15 + 1) = &v18;
        v16 = 2LL;
        std::io::stdio::_print(&v14);
        core::ptr::drop_in_place<alloc::string::String>(&v11);
      }
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21, v25);
      v7 = v22;
      v4 = 0x8000000000000001LL;
    }
    while ( v22 != 0x8000000000000001LL );
    return 0LL;
  }
  return v2;
}