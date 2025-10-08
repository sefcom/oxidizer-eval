__int64 __fastcall uu_uniq::Uniq::print_uniq(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  char v11; // bp
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  char v22; // [rsp+17h] [rbp-B1h]
  __int64 v23; // [rsp+18h] [rbp-B0h]
  char v24; // [rsp+27h] [rbp-A1h]
  __int64 v25; // [rsp+28h] [rbp-A0h]
  __int64 v26; // [rsp+38h] [rbp-90h]
  __int64 v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-80h] BYREF
  __int64 v29; // [rsp+50h] [rbp-78h]
  __int64 v30; // [rsp+58h] [rbp-70h]
  unsigned __int64 v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  int v34; // [rsp+7Ch] [rbp-4Ch]
  __int64 v35; // [rsp+80h] [rbp-48h] BYREF
  __int64 v36; // [rsp+88h] [rbp-40h]

  v7 = 10;
  if ( a1[53] )
    v7 = 0;
  v34 = v7;
  std::io::BufRead::split(&v35);
  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v28, &v35);
  v31 = 0x8000000000000001LL;
  if ( v28 != 0x8000000000000001LL )
  {
    v25 = v28;
    if ( v28 == 0x8000000000000000LL )
    {
      v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
      goto LABEL_7;
    }
    v23 = v29;
    v9 = v30;
    v32 = v35;
    v33 = v36;
    v22 = a1[49];
    v27 = a5;
    v26 = a4;
    v24 = a1[48];
    if ( (a1[50] & 1) != 0 )
    {
      v10 = 1LL;
      v11 = 0;
      v12 = v28;
      while ( 1 )
      {
        while ( 1 )
        {
          v25 = v12;
          <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v28, &v35);
          v12 = v28;
          if ( v28 == v31 )
            goto LABEL_49;
          v13 = v29;
          if ( v28 == 0x8000000000000000LL )
            goto LABEL_57;
          v14 = v30;
          if ( (unsigned __int8)uu_uniq::Uniq::cmp_keys(a1, v23, v9, v29, v30) )
            break;
          v8 = uu_uniq::Uniq::print_line(a1, v26, v27, v23, v9, v10, v11);
          if ( v8 )
            goto LABEL_22;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v25, v23);
          ++v10;
          v11 = 1;
          v23 = v13;
          v9 = v14;
        }
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            if ( (v24 & 1) != 0 )
              goto LABEL_10;
          }
          else if ( (v22 & 1) != 0 )
          {
            goto LABEL_10;
          }
          v8 = uu_uniq::Uniq::print_line(a1, v26, v27, v23, v9, v10, v11);
          v11 = 1;
          if ( v8 )
            goto LABEL_22;
        }
LABEL_10:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v25, v23);
        v23 = v13;
        v9 = v14;
        v10 = 1LL;
      }
    }
    if ( (a1[48] & 1) != 0 )
    {
      v10 = 1LL;
      v11 = 0;
      while ( 1 )
      {
        <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v28, &v35);
        v12 = v28;
        if ( v28 == v31 )
          break;
        v13 = v29;
        if ( v28 == 0x8000000000000000LL )
          goto LABEL_57;
        v15 = v30;
        if ( (unsigned __int8)uu_uniq::Uniq::cmp_keys(a1, v23, v9, v29, v30) )
        {
          if ( !(v22 & 1 | (v10 < 2)) )
          {
            v8 = uu_uniq::Uniq::print_line(a1, v26, v27, v23, v9, v10, v11);
            v11 = 1;
            if ( v8 )
              goto LABEL_22;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v25, v23);
          v25 = v12;
          v23 = v13;
          v9 = v15;
          v10 = 1LL;
        }
        else
        {
          ++v10;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v12, v13);
        }
      }
    }
    else
    {
      if ( (v22 & 1) == 0 )
      {
        v10 = 1LL;
        v11 = 0;
        while ( 1 )
        {
          <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v28, &v35);
          v12 = v28;
          if ( v28 == v31 )
            goto LABEL_49;
          v13 = v29;
          if ( v28 == 0x8000000000000000LL )
            break;
          v17 = v30;
          if ( (unsigned __int8)uu_uniq::Uniq::cmp_keys(a1, v23, v9, v29, v30) )
          {
            if ( v10 )
            {
              v8 = uu_uniq::Uniq::print_line(a1, v26, v27, v23, v9, v10, v11);
              v11 = 1;
              if ( v8 )
              {
LABEL_22:
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v12, v13);
                a5 = v27;
                a4 = v26;
LABEL_58:
                core::ptr::drop_in_place<std::io::error::Custom>(v32, v33);
                goto LABEL_64;
              }
            }
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v25, v23);
            v25 = v12;
            v23 = v13;
            v9 = v17;
            v10 = 1LL;
          }
          else
          {
            ++v10;
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v12, v13);
          }
        }
LABEL_57:
        v19 = v13;
        a5 = v27;
        a4 = v26;
        v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
        goto LABEL_58;
      }
      v10 = 1LL;
      v11 = 0;
      while ( 1 )
      {
        <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v28, &v35);
        v12 = v28;
        if ( v28 == v31 )
          break;
        v13 = v29;
        if ( v28 == 0x8000000000000000LL )
          goto LABEL_57;
        v16 = v30;
        if ( (unsigned __int8)uu_uniq::Uniq::cmp_keys(a1, v23, v9, v29, v30) )
        {
          if ( v10 == 1 )
          {
            v8 = uu_uniq::Uniq::print_line(a1, v26, v27, v23, v9, 1LL, v11);
            v11 = 1;
            if ( v8 )
              goto LABEL_22;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v25, v23);
          v25 = v12;
          v23 = v13;
          v9 = v16;
          v10 = 1LL;
        }
        else
        {
          ++v10;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v12, v13);
        }
      }
    }
LABEL_49:
    a5 = v27;
    a4 = v26;
    core::ptr::drop_in_place<std::io::error::Custom>(v32, v33);
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        if ( (v24 & 1) != 0 )
          goto LABEL_52;
LABEL_60:
        v8 = uu_uniq::Uniq::print_line(a1, v26, v27, v23, v9, v10, v11);
        if ( v8 )
          goto LABEL_64;
        if ( a1[54] == 3 || !a1[54] )
        {
LABEL_55:
          LOBYTE(v28) = v34;
          v18 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(v26, v27, &v28, 1LL);
          v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v18);
          if ( !v8 )
            goto LABEL_63;
LABEL_64:
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v25, v23);
          goto LABEL_65;
        }
LABEL_63:
        v20 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::flush(v26, v27);
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v20);
        if ( !v8 )
        {
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v25, v23);
          v8 = 0LL;
          goto LABEL_65;
        }
        goto LABEL_64;
      }
      if ( (v22 & 1) == 0 )
        goto LABEL_60;
    }
LABEL_52:
    if ( (!a1[54] || a1[54] == 3) && (v11 & 1) != 0 )
      goto LABEL_55;
    goto LABEL_63;
  }
  v8 = 0LL;
LABEL_7:
  core::ptr::drop_in_place<std::io::error::Custom>(v35, v36);
LABEL_65:
  core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(a4, a5);
  return v8;
}