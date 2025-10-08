__int64 __fastcall uu_uniq::map_clap_errors(__int64 a1)
{
  __int64 v1; // rbx
  __int128 *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int128 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v10; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+20h] [rbp-98h]
  int v12; // [rsp+28h] [rbp-90h]
  __int128 v13; // [rsp+30h] [rbp-88h] BYREF
  __int64 v14; // [rsp+40h] [rbp-78h]
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int128 v17; // [rsp+68h] [rbp-50h] BYREF
  __int64 v18; // [rsp+78h] [rbp-40h]
  __int128 v19; // [rsp+80h] [rbp-38h] BYREF
  __int64 v20; // [rsp+90h] [rbp-28h]

  v9 = a1;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aGroupIsMutuall, 47LL);
  v14 = v11;
  v13 = v10;
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v19, &v13);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aInvalidArgumen_0, 117LL);
  v14 = v11;
  v13 = v10;
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v15, &v13);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aInvalidArgumen_1, 111LL);
  v14 = v11;
  v13 = v10;
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v17, &v13);
  if ( !*(_BYTE *)(a1 + 221) )
  {
    v3 = clap_builder::error::Error<F>::get(&v9, 5LL);
    if ( v3
      && (unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v3)
      && (v4 = clap_builder::error::Error<F>::get(&v9, 1LL)) != 0
      && (unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v4) )
    {
      v12 = 1;
      v10 = v15;
      v11 = v16;
      v1 = alloc::boxed::Box<T>::new(&v10);
      v5 = &v17;
    }
    else
    {
      v6 = clap_builder::error::Error<F>::get(&v9, 5LL);
      if ( !v6 )
        goto LABEL_16;
      if ( !(unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v6) )
        goto LABEL_16;
      v7 = clap_builder::error::Error<F>::get(&v9, 1LL);
      if ( !v7 || !(unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v7) )
        goto LABEL_16;
      v12 = 1;
      v10 = v17;
      v11 = v18;
      v1 = alloc::boxed::Box<T>::new(&v10);
      v5 = &v15;
    }
    core::ptr::drop_in_place<alloc::string::String>(v5);
    v2 = &v19;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a1 + 221) != 8 )
  {
LABEL_16:
    v1 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
    core::ptr::drop_in_place<alloc::string::String>(&v15);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
    return v1;
  }
  v12 = 1;
  v10 = v19;
  v11 = v20;
  v1 = alloc::boxed::Box<T>::new(&v10);
  core::ptr::drop_in_place<alloc::string::String>(&v17);
  v2 = &v15;
LABEL_4:
  core::ptr::drop_in_place<alloc::string::String>(v2);
  core::ptr::drop_in_place<clap_builder::error::Error>(v9);
  return v1;
}