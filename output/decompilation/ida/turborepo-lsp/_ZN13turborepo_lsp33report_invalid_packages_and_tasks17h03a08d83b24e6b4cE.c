__int64 __fastcall turborepo_lsp::report_invalid_packages_and_tasks(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int128 *v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 inner; // rbx
  __int64 result; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  __int64 v19; // [rsp+8h] [rbp-310h] BYREF
  __int64 v20; // [rsp+10h] [rbp-308h]
  __int128 v21; // [rsp+18h] [rbp-300h] BYREF
  __int128 *v22; // [rsp+28h] [rbp-2F0h]
  __int128 v23; // [rsp+30h] [rbp-2E8h]
  __int128 v24; // [rsp+40h] [rbp-2D8h]
  __int128 v25; // [rsp+50h] [rbp-2C8h]
  __int128 v26; // [rsp+60h] [rbp-2B8h]
  __int128 v27; // [rsp+70h] [rbp-2A8h]
  __int64 v28; // [rsp+80h] [rbp-298h]
  __int128 v29; // [rsp+88h] [rbp-290h]
  __int64 v30; // [rsp+98h] [rbp-280h]
  __int128 v31; // [rsp+A0h] [rbp-278h]
  __int64 v32; // [rsp+B0h] [rbp-268h]
  __int128 v33; // [rsp+B8h] [rbp-260h]
  __int64 v34; // [rsp+C8h] [rbp-250h]
  unsigned __int64 v35[3]; // [rsp+D0h] [rbp-248h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-230h]
  __int128 v37; // [rsp+F8h] [rbp-220h]
  __int128 v38; // [rsp+108h] [rbp-210h]
  __int128 v39; // [rsp+118h] [rbp-200h]
  __int64 v40; // [rsp+128h] [rbp-1F0h]
  int v41; // [rsp+130h] [rbp-1E8h]
  __int128 v42; // [rsp+138h] [rbp-1E0h]
  __int128 v43; // [rsp+148h] [rbp-1D0h] BYREF
  __int64 *v44; // [rsp+158h] [rbp-1C0h]
  __int128 v45; // [rsp+160h] [rbp-1B8h] BYREF
  __int64 *v46; // [rsp+170h] [rbp-1A8h]
  __int128 v47; // [rsp+178h] [rbp-1A0h]
  __int128 v48; // [rsp+188h] [rbp-190h]
  __int128 v49; // [rsp+198h] [rbp-180h]
  __int128 v50; // [rsp+1A8h] [rbp-170h]
  __int128 v51; // [rsp+1B8h] [rbp-160h]
  __int64 v52; // [rsp+1C8h] [rbp-150h]
  __int128 v53; // [rsp+1D0h] [rbp-148h]
  __int64 v54; // [rsp+1E0h] [rbp-138h]
  __int128 v55; // [rsp+1E8h] [rbp-130h]
  __int64 v56; // [rsp+1F8h] [rbp-120h]
  __int128 v57; // [rsp+200h] [rbp-118h]
  __int64 v58; // [rsp+210h] [rbp-108h]
  __int128 v59; // [rsp+218h] [rbp-100h]
  __int128 *v60; // [rsp+228h] [rbp-F0h]
  __int128 v61; // [rsp+230h] [rbp-E8h]
  __int128 v62; // [rsp+240h] [rbp-D8h]
  __int128 v63; // [rsp+250h] [rbp-C8h]
  __int128 v64; // [rsp+260h] [rbp-B8h]
  __int64 v65; // [rsp+270h] [rbp-A8h]
  __int64 v66; // [rsp+278h] [rbp-A0h]
  __int128 v67; // [rsp+280h] [rbp-98h]
  _QWORD v68[2]; // [rsp+298h] [rbp-80h] BYREF
  __int128 v69; // [rsp+2A8h] [rbp-70h] BYREF
  __int64 v70; // [rsp+2B8h] [rbp-60h]
  __int64 v71; // [rsp+2C0h] [rbp-58h]
  _QWORD v72[2]; // [rsp+2C8h] [rbp-50h] BYREF
  _QWORD v73[8]; // [rsp+2D8h] [rbp-40h] BYREF

  v70 = a2;
  v72[0] = a2;
  v7 = (__int128 *)a5[1];
  v8 = a5[2];
  core::str::<impl str>::split_once(&v21, v7, v8);
  v71 = *((_QWORD *)&v21 + 1);
  v9 = v21;
  if ( (_QWORD)v21 )
  {
    v7 = v22;
    v8 = v23;
  }
  v68[0] = v7;
  v68[1] = v8;
  turborepo_lsp::convert_ranges(&v69, a3, a5[3] + 1LL, a5[4] - 1LL);
  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, v7, v8);
  result = inner + 24;
  if ( !inner )
    result = 0LL;
  v72[1] = result;
  v73[0] = v9;
  v13 = v71;
  v73[1] = v71;
  if ( v9 )
  {
    if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v70, v73) )
    {
      if ( inner )
      {
        v15 = *(_QWORD *)(inner + 32) + 24LL * *(_QWORD *)(inner + 40);
        *(_QWORD *)&v21 = *(_QWORD *)(inner + 32);
        *((_QWORD *)&v21 + 1) = v15;
        *(_QWORD *)&v45 = v73;
        v16 = core::iter::traits::iterator::Iterator::try_fold(&v21, &v45);
        result = core::result::Result<T,E>::is_err(v16);
        if ( (_BYTE)result )
          return result;
        v19 = v9;
        v20 = v13;
        *(_QWORD *)&v45 = v68;
        *((_QWORD *)&v45 + 1) = <&T as core::fmt::Display>::fmt;
        v46 = &v19;
        *(_QWORD *)&v47 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v21 = &off_92F6E8;
        *((_QWORD *)&v21 + 1) = 3LL;
        v22 = &v45;
        v23 = 2uLL;
        core::option::Option<T>::map_or_else(&v43, 0LL, v17, &v21);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aTurboNoSuchTas, 29LL);
        v60 = v22;
        v59 = v21;
        v41 = 0;
        v42 = 0LL;
        v35[0] = 0x8000000000000001LL;
        *(_QWORD *)&v23 = 0x8000000000000000LL;
        *(_QWORD *)&v29 = 0x8000000000000000LL;
        *(_QWORD *)&v21 = 0LL;
        *((_QWORD *)&v21 + 1) = 1LL;
        v22 = 0LL;
        *(_QWORD *)&v31 = 0x8000000000000000LL;
        *(_QWORD *)&v33 = 0x8000000000000000LL;
        *(_QWORD *)&v36 = 0x8000000000000005LL;
        v67 = v69;
        v66 = 0x100000001LL;
        v52 = v28;
        v51 = v27;
        v50 = v26;
        v49 = v25;
        v48 = v24;
        v47 = v23;
        v54 = v30;
        v53 = v29;
        v46 = v44;
        v45 = v43;
        v56 = v32;
        v55 = v31;
        v58 = v34;
        v57 = v33;
        v65 = v40;
        v64 = v39;
        v63 = v38;
        v62 = v37;
        v61 = v36;
        alloc::vec::Vec<T,A>::push(a4, &v45, &off_92F768);
      }
      else
      {
        v19 = v9;
        v20 = v13;
        *(_QWORD *)&v45 = v68;
        *((_QWORD *)&v45 + 1) = <&T as core::fmt::Display>::fmt;
        v46 = &v19;
        *(_QWORD *)&v47 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v21 = &off_92F6E8;
        *((_QWORD *)&v21 + 1) = 3LL;
        v22 = &v45;
        v23 = 2uLL;
        core::option::Option<T>::map_or_else(&v43, 0LL, v14, &v21);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aTurboNoSuchTas_0, 18LL);
        v60 = v22;
        v59 = v21;
        v41 = 0;
        v42 = 0LL;
        v35[0] = 0x8000000000000001LL;
        *(_QWORD *)&v23 = 0x8000000000000000LL;
        *(_QWORD *)&v29 = 0x8000000000000000LL;
        *(_QWORD *)&v21 = 0LL;
        *((_QWORD *)&v21 + 1) = 1LL;
        v22 = 0LL;
        *(_QWORD *)&v31 = 0x8000000000000000LL;
        *(_QWORD *)&v33 = 0x8000000000000000LL;
        *(_QWORD *)&v36 = 0x8000000000000005LL;
        v67 = v69;
        v66 = 0x100000001LL;
        v52 = v28;
        v51 = v27;
        v50 = v26;
        v49 = v25;
        v48 = v24;
        v47 = v23;
        v54 = v30;
        v53 = v29;
        v46 = v44;
        v45 = v43;
        v56 = v32;
        v55 = v31;
        v58 = v34;
        v57 = v33;
        v65 = v40;
        v64 = v39;
        v63 = v38;
        v62 = v37;
        v61 = v36;
        alloc::vec::Vec<T,A>::push(a4, &v45, &off_92F750);
      }
    }
    else
    {
      v19 = v9;
      v20 = v13;
      *(_QWORD *)&v45 = &v19;
      *((_QWORD *)&v45 + 1) = <&T as core::fmt::Display>::fmt;
      v46 = v72;
      *(_QWORD *)&v47 = <&T as core::fmt::Debug>::fmt;
      *(_QWORD *)&v21 = &off_92F6C8;
      *((_QWORD *)&v21 + 1) = 2LL;
      v22 = &v45;
      v23 = 2uLL;
      core::option::Option<T>::map_or_else(&v43, 0LL, v14, &v21);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aTurboNoSuchPac, 21LL);
      v60 = v22;
      v59 = v21;
      v41 = 0;
      v42 = 0LL;
      v35[0] = 0x8000000000000001LL;
      *(_QWORD *)&v23 = 0x8000000000000000LL;
      *(_QWORD *)&v29 = 0x8000000000000000LL;
      *(_QWORD *)&v21 = 0LL;
      *((_QWORD *)&v21 + 1) = 1LL;
      v22 = 0LL;
      *(_QWORD *)&v31 = 0x8000000000000000LL;
      *(_QWORD *)&v33 = 0x8000000000000000LL;
      *(_QWORD *)&v36 = 0x8000000000000005LL;
      v67 = v69;
      v66 = 0x100000001LL;
      v52 = v28;
      v51 = v27;
      v50 = v26;
      v49 = v25;
      v48 = v24;
      v47 = v23;
      v54 = v30;
      v53 = v29;
      v46 = v44;
      v45 = v43;
      v56 = v32;
      v55 = v31;
      v58 = v34;
      v57 = v33;
      v65 = v40;
      v64 = v39;
      v63 = v38;
      v62 = v37;
      v61 = v36;
      alloc::vec::Vec<T,A>::push(a4, &v45, &off_92F780);
    }
  }
  else
  {
    if ( inner )
      return result;
    *(_QWORD *)&v45 = v68;
    *((_QWORD *)&v45 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v21 = &off_92F718;
    *((_QWORD *)&v21 + 1) = 2LL;
    v22 = &v45;
    v23 = 1uLL;
    core::option::Option<T>::map_or_else(&v43, 0LL, v10, &v21);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aTurboNoSuchTas_0, 18LL);
    v60 = v22;
    v59 = v21;
    v41 = 0;
    v42 = 0LL;
    v35[0] = 0x8000000000000001LL;
    *(_QWORD *)&v23 = 0x8000000000000000LL;
    *(_QWORD *)&v29 = 0x8000000000000000LL;
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 1LL;
    v22 = 0LL;
    *(_QWORD *)&v31 = 0x8000000000000000LL;
    *(_QWORD *)&v33 = 0x8000000000000000LL;
    *(_QWORD *)&v36 = 0x8000000000000005LL;
    v67 = v69;
    v66 = 0x100000001LL;
    v52 = v28;
    v51 = v27;
    v50 = v26;
    v49 = v25;
    v48 = v24;
    v47 = v23;
    v54 = v30;
    v53 = v29;
    v46 = v44;
    v45 = v43;
    v56 = v32;
    v55 = v31;
    v58 = v34;
    v57 = v33;
    v65 = v40;
    v64 = v39;
    v63 = v38;
    v62 = v37;
    v61 = v36;
    alloc::vec::Vec<T,A>::push(a4, &v45, &off_92F738);
  }
  core::ptr::drop_in_place<core::option::Option<lsp_types::NumberOrString>>(v35);
  return core::ptr::drop_in_place<alloc::string::String>(&v21);
}