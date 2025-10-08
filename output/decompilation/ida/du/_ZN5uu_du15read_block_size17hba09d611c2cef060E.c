__int64 *__fastcall uu_du::read_block_size(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v4)(); // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // bp
  __int64 v9; // [rsp+8h] [rbp-D0h] BYREF
  char v10[8]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-C0h]
  __int64 v12; // [rsp+20h] [rbp-B8h]
  _QWORD v13[8]; // [rsp+28h] [rbp-B0h] BYREF
  int v14; // [rsp+68h] [rbp-70h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+70h] [rbp-68h]
  int v16; // [rsp+88h] [rbp-50h] BYREF
  __int64 v17; // [rsp+90h] [rbp-48h]

  if ( a2 )
  {
    uucore::features::parser::parse_size::parse_size_u64(&v14, a2, a3);
    if ( v14 == 4 )
    {
      v4 = v15;
      v5 = 0LL;
    }
    else
    {
      v5 = uu_du::read_block_size::{{closure}}(a2, a3, &v14);
      v4 = &off_145BC0;
    }
    a1[1] = (__int64)v4;
    *a1 = v5;
  }
  else
  {
    v13[0] = 0LL;
    v13[1] = 3LL;
    v13[2] = aDuBlockSize;
    v13[3] = 13LL;
    v13[4] = aBlockSize_0;
    v13[5] = 10LL;
    v13[6] = aBlocksize;
    v13[7] = 9LL;
    v6 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v13);
    if ( v6 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          std::env::var(&v9, v6);
          if ( !v9 )
            break;
          core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v9);
          v6 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v13);
          if ( !v6 )
            goto LABEL_10;
        }
        uucore::features::parser::parse_size::parse_size_u64(&v16, v11, v12);
        if ( v16 == 4 )
          break;
        core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v16);
        core::ptr::drop_in_place<alloc::string::String>(v10);
        v6 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v13);
        if ( !v6 )
          goto LABEL_10;
      }
      a1[1] = v17;
      *a1 = 0LL;
      core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v16);
      core::ptr::drop_in_place<alloc::string::String>(v10);
    }
    else
    {
LABEL_10:
      std::env::var(v13, aPosixlyCorrect);
      v7 = v13[0];
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v13);
      if ( (v7 & 1) != 0 )
        a1[1] = 1024LL;
      else
        a1[1] = 512LL;
      *a1 = 0LL;
    }
  }
  return a1;
}