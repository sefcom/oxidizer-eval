__int64 __fastcall uu_uniq::Uniq::print_uniq(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // r14
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  char v9; // bl
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  char v13; // [rsp+Dh] [rbp-FBh]
  char v14; // [rsp+Eh] [rbp-FAh]
  char v15; // [rsp+Fh] [rbp-F9h]
  __int128 v16; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-E8h]
  __int64 v18; // [rsp+30h] [rbp-D8h]
  __int64 v19; // [rsp+38h] [rbp-D0h]
  __int128 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h]
  unsigned int v22; // [rsp+64h] [rbp-A4h]
  __int128 v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-88h] BYREF
  __int64 v26; // [rsp+90h] [rbp-78h]
  __int128 v27; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v29; // [rsp+B8h] [rbp-50h]
  __int128 v30; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-38h]

  v19 = a5;
  v18 = a4;
  v5 = 10;
  if ( a1[53] )
    v5 = 0;
  std::io::BufRead::split(&v27, a2, a3, v5);
  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v20, &v27);
  v6 = 0x8000000000000000LL;
  if ( (_QWORD)v20 != 0x8000000000000001LL )
  {
    if ( (_QWORD)v20 == 0x8000000000000000LL )
    {
      v7 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v20 + 1));
      goto LABEL_7;
    }
    v22 = v5;
    v16 = v20;
    v17 = v21;
    v26 = v28;
    v25 = v27;
    v15 = a1[50];
    v14 = a1[48];
    v13 = a1[49];
    v8 = 1LL;
    v9 = 0;
    v29 = 0x8000000000000001LL;
    while ( 1 )
    {
      <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v30, &v25);
      if ( (_QWORD)v30 == v29 )
        break;
      if ( (_QWORD)v30 == v6 )
      {
        v7 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v30 + 1));
        goto LABEL_28;
      }
      v10 = v6;
      v23 = v30;
      v24 = v31;
      if ( (unsigned __int8)uu_uniq::Uniq::cmp_keys(
                              (__int64)a1,
                              *((_QWORD **)&v16 + 1),
                              v17,
                              *((__int64 *)&v30 + 1),
                              v31) )
      {
        if ( v14 == 0 && v8 == 1 || v13 == 0 && v8 > 1 )
        {
          v7 = uu_uniq::Uniq::print_line(a1, v18, v19, *((__int64 *)&v16 + 1), v17, v8, v9 & 1);
          v9 = 1;
          if ( v7 )
          {
LABEL_27:
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v23);
LABEL_28:
            core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>(
              v25,
              *((_QWORD *)&v25 + 1));
LABEL_33:
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
            goto LABEL_35;
          }
        }
        v21 = v24;
        v20 = v23;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
        v17 = v21;
        v16 = v20;
        v8 = 1LL;
        v6 = v10;
      }
      else if ( v15 )
      {
        v7 = uu_uniq::Uniq::print_line(a1, v18, v19, *((__int64 *)&v16 + 1), v17, v8, v9 & 1);
        if ( v7 )
          goto LABEL_27;
        v21 = v24;
        v20 = v23;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
        v17 = v21;
        v16 = v20;
        ++v8;
        v9 = 1;
        v6 = v10;
      }
      else
      {
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v23);
        ++v8;
      }
    }
    core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>(v25, *((_QWORD *)&v25 + 1));
    if ( v14 == 0 && v8 == 1 || v13 == 0 && v8 > 1 )
    {
      v7 = uu_uniq::Uniq::print_line(a1, v18, v19, *((__int64 *)&v16 + 1), v17, v8, v9 & 1);
      if ( v7 )
        goto LABEL_33;
      if ( a1[54] && a1[54] != 3 )
        goto LABEL_34;
    }
    else if ( a1[54] && a1[54] != 3 || (v9 & 1) == 0 )
    {
LABEL_34:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
      v7 = 0LL;
      goto LABEL_35;
    }
    LOBYTE(v20) = v22;
    v11 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(v18, v19, &v20, 1LL);
    v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v11);
    if ( v7 )
      goto LABEL_33;
    goto LABEL_34;
  }
  v7 = 0LL;
LABEL_7:
  core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>(v27, *((_QWORD *)&v27 + 1));
LABEL_35:
  core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v18, v19);
  return v7;
}
