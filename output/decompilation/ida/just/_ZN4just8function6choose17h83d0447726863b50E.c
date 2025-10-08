__int64 __fastcall just::function::choose(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int128 v23; // xmm0
  char v25; // [rsp+7h] [rbp-121h] BYREF
  __int64 v26; // [rsp+8h] [rbp-120h]
  __int64 v27; // [rsp+10h] [rbp-118h] BYREF
  __int64 v28; // [rsp+18h] [rbp-110h]
  __int64 *v29; // [rsp+28h] [rbp-100h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+30h] [rbp-F8h]
  char *v31; // [rsp+38h] [rbp-F0h]
  __int64 (__fastcall *v32)(); // [rsp+40h] [rbp-E8h]
  char **v33; // [rsp+48h] [rbp-E0h] BYREF
  __int64 **v34; // [rsp+50h] [rbp-D8h]
  __int64 **v35; // [rsp+58h] [rbp-D0h]
  __int64 v36; // [rsp+60h] [rbp-C8h]
  __int64 v37; // [rsp+68h] [rbp-C0h]
  __int64 v38; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+80h] [rbp-A8h]
  _BYTE v40[8]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v41; // [rsp+98h] [rbp-90h]
  _QWORD v42[2]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v43[6]; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-38h]

  v26 = a1;
  v42[0] = a3;
  v42[1] = a4;
  v10 = std::thread::local::LocalKey<T>::with();
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(v43, a6, v10, v11);
  v12 = a5 + a6;
  v38 = a5;
  *(_QWORD *)&v39 = v12;
  if ( (core::str::validations::next_code_point(&v38) & 1) != 0 )
  {
    while ( 1 )
    {
      LODWORD(v27) = v13;
      if ( (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(v43, v13) )
        break;
      if ( (core::str::validations::next_code_point(&v38) & 1) == 0 )
        goto LABEL_4;
    }
    v29 = &v27;
    v30 = <char as core::fmt::Display>::fmt;
    v33 = &off_42FDB0;
    v34 = (__int64 **)(&dword_0 + 2);
    v37 = 0LL;
    v35 = &v29;
    v36 = 1LL;
    core::option::Option<T>::map_or_else(&v44, 0LL, v14, &v33);
    v22 = v26;
    *(_QWORD *)(v26 + 24) = v45;
    *(_OWORD *)(v22 + 8) = v44;
    *(_QWORD *)v22 = 1LL;
  }
  else
  {
LABEL_4:
    core::iter::traits::iterator::Iterator::collect(&v27, a5, v12);
    v15 = (__int64 *)v40;
    v16 = a3;
    core::num::<impl usize>::from_ascii_radix(v40, a3, a4);
    if ( v40[0] )
    {
      v25 = v40[1];
      v29 = v42;
      v30 = <&T as core::fmt::Display>::fmt;
      v31 = &v25;
      v32 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
      v33 = &off_42FDD0;
      v34 = (__int64 **)(&dword_0 + 2);
      v37 = 0LL;
      v35 = &v29;
      v36 = 2LL;
      v15 = &v38;
      v16 = 0LL;
      core::option::Option<T>::map_or_else(&v38, 0LL, v17, &v33);
      v18 = -v38;
      if ( !__OFSUB__(-v38, 1LL) )
      {
        v23 = v39;
        v22 = v26;
        *(_QWORD *)(v26 + 8) = v38;
        *(_OWORD *)(v22 + 16) = v23;
        *(_QWORD *)v22 = 1LL;
        core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v27, v28, v17, v18);
        goto LABEL_11;
      }
      v19 = v39;
    }
    else
    {
      v19 = v41;
    }
    v29 = (__int64 *)rand::rngs::thread::rng(v15, v16, v17, v18);
    v35 = 0LL;
    v36 = v19;
    v33 = (char **)&v27;
    v34 = &v29;
    core::iter::traits::iterator::Iterator::collect(v26, &v33);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v29);
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v27, v28, v20, v21);
    v22 = v26;
  }
LABEL_11:
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<char>>(v43[0], v43[1]);
  return v22;
}