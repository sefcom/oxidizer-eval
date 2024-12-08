__int64 __fastcall uu_uniq::map_clap_errors(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+20h] [rbp-98h]
  int v11; // [rsp+28h] [rbp-90h]
  __int128 v12; // [rsp+30h] [rbp-88h] BYREF
  __int64 v13; // [rsp+40h] [rbp-78h]
  __int128 v14; // [rsp+48h] [rbp-70h] BYREF
  __int64 v15; // [rsp+58h] [rbp-60h]
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+78h] [rbp-40h] BYREF
  __int64 v19; // [rsp+88h] [rbp-30h]

  v8 = a1;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, aGroupIsMutuall, 47LL);
  v13 = v10;
  v12 = v9;
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v16, &v12);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, aInvalidArgumen_0, 117LL);
  v13 = v10;
  v12 = v9;
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v18, &v12);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, aInvalidArgumen_1, 111LL);
  v13 = v10;
  v12 = v9;
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v14, &v12);
  if ( *(_BYTE *)(a1 + 213) )
  {
    if ( *(_BYTE *)(a1 + 213) == 8 )
    {
      v11 = 1;
      v9 = v16;
      v10 = v17;
      v1 = alloc::boxed::Box<T>::new(&v9);
      v2 = 1;
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      goto LABEL_4;
    }
LABEL_17:
    v1 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    core::ptr::drop_in_place<alloc::string::String>(&v18);
    core::ptr::drop_in_place<alloc::string::String>(&v16);
    return v1;
  }
  v3 = clap_builder::error::Error<F>::get(&v8, 5LL);
  if ( v3 )
  {
    if ( (unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v3) )
    {
      v4 = clap_builder::error::Error<F>::get(&v8, 1LL);
      if ( v4 )
      {
        if ( (unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v4) )
        {
          v11 = 1;
          v9 = v18;
          v10 = v19;
          v1 = alloc::boxed::Box<T>::new(&v9);
          core::ptr::drop_in_place<alloc::string::String>(&v14);
          goto LABEL_5;
        }
      }
    }
  }
  v5 = clap_builder::error::Error<F>::get(&v8, 5LL);
  if ( !v5 )
    goto LABEL_17;
  if ( !(unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v5) )
    goto LABEL_17;
  v6 = clap_builder::error::Error<F>::get(&v8, 1LL);
  if ( !v6 || !(unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v6) )
    goto LABEL_17;
  v11 = 1;
  v9 = v14;
  v10 = v15;
  v1 = alloc::boxed::Box<T>::new(&v9);
  v2 = 0;
LABEL_4:
  core::ptr::drop_in_place<alloc::string::String>(&v18);
  if ( !v2 )
LABEL_5:
    core::ptr::drop_in_place<alloc::string::String>(&v16);
  core::ptr::drop_in_place<clap_builder::error::Error>(v8);
  return v1;
}
