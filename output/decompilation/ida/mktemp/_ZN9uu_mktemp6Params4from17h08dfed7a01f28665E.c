__int64 __fastcall uu_mktemp::Params::from(__int64 a1, __int128 *a2)
{
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  char v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  char v14; // r12
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rbp
  __int128 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  char v36; // [rsp+7h] [rbp-1A1h]
  __int128 *v37; // [rsp+8h] [rbp-1A0h]
  __int128 v38; // [rsp+10h] [rbp-198h] BYREF
  __int64 *v39; // [rsp+20h] [rbp-188h]
  __int64 (__fastcall *v40)(); // [rsp+28h] [rbp-180h]
  _BYTE v41[40]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v42; // [rsp+58h] [rbp-150h]
  __int128 v43; // [rsp+60h] [rbp-148h]
  __int64 v44; // [rsp+70h] [rbp-138h]
  __int128 v45; // [rsp+80h] [rbp-128h] BYREF
  __int64 v46; // [rsp+90h] [rbp-118h]
  __int64 v47; // [rsp+A0h] [rbp-108h]
  __int64 v48; // [rsp+A8h] [rbp-100h]
  __int64 v49; // [rsp+B0h] [rbp-F8h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-F0h]
  __int128 v51; // [rsp+C8h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-D0h]
  __int128 v53; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-B8h]
  __int64 v55; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v56; // [rsp+108h] [rbp-A0h]
  __int128 v57; // [rsp+118h] [rbp-90h] BYREF
  __int64 v58; // [rsp+128h] [rbp-80h]
  __int128 v59; // [rsp+130h] [rbp-78h] BYREF
  __int64 v60; // [rsp+140h] [rbp-68h]
  _QWORD v61[2]; // [rsp+150h] [rbp-58h] BYREF
  __int128 v62; // [rsp+160h] [rbp-48h] BYREF
  __int64 v63; // [rsp+170h] [rbp-38h]

  v37 = a2 + 3;
  if ( *((_QWORD *)a2 + 6) == 0x8000000000000000LL
    || (v3 = *((_QWORD *)a2 + 1),
        v4 = *((_QWORD *)a2 + 2),
        *(_DWORD *)v41 = 0,
        v5 = core::char::methods::encode_utf8_raw(88LL, v41),
        (unsigned __int8)core::slice::<impl [T]>::ends_with(v3, v4, v5, v6)) )
  {
    uu_mktemp::find_last_contiguous_block_of_xs((__int64 *)&v45, *((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2));
    if ( !(_QWORD)v45 )
    {
      if ( *(_QWORD *)v37 == 0x8000000000000000LL )
      {
        v39 = (__int64 *)*((_QWORD *)a2 + 2);
        v38 = *a2;
        v8 = 0;
      }
      else
      {
        v9 = *((_QWORD *)a2 + 2);
        *(_QWORD *)v41 = *((_QWORD *)a2 + 1);
        *(_QWORD *)&v41[8] = v9 + *(_QWORD *)v41;
        *(_QWORD *)&v41[16] = v9;
        <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v38, v41);
        v8 = 1;
      }
      *(_QWORD *)(a1 + 24) = v39;
      *(_OWORD *)(a1 + 8) = v38;
      *(_QWORD *)(a1 + 32) = 0x8000000000000002LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>((char *)a2 + 24);
LABEL_43:
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v37);
LABEL_44:
      if ( !v8 )
        return a1;
      goto LABEL_49;
    }
    v7 = *((_QWORD *)&v45 + 1);
    v48 = v46;
    v54 = *((_QWORD *)a2 + 5);
    v53 = *(__int128 *)((char *)a2 + 24);
    if ( (_QWORD)v53 == 0x8000000000000000LL
      || (<alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v41, &v53),
          v38 = *(_OWORD *)&v41[8],
          *(_QWORD *)v41 == 0x8000000000000000LL) )
    {
      v49 = 0LL;
      v50 = 1uLL;
    }
    else
    {
      v50 = v38;
      v49 = *(_QWORD *)v41;
    }
    v10 = *((_QWORD *)a2 + 1);
    if ( v7 )
    {
      v11 = *((_QWORD *)a2 + 2);
      if ( v7 >= v11 )
      {
        if ( v7 != v11 )
LABEL_16:
          core::str::slice_error_fail(*((_QWORD *)a2 + 1), v11, 0LL, v7, &off_136A40);
      }
      else if ( *(char *)(v10 + v7) <= -65 )
      {
        goto LABEL_16;
      }
    }
    std::path::Path::join(v41, v50, *((_QWORD *)&v50 + 1), *((_QWORD *)a2 + 1), v7);
    v38 = *(_OWORD *)&v41[8];
    v12 = <T as alloc::string::ToString>::to_string(&v51, &v38);
    LOBYTE(v12) = 1;
    v47 = v12;
    core::ptr::drop_in_place<std::path::PathBuf>(v41);
    if ( *((_BYTE *)a2 + 75) && (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(v10, v7) )
    {
      v13 = 0x8000000000000003LL;
    }
    else
    {
      if ( (_QWORD)v53 == 0x8000000000000000LL || !(unsigned __int8)std::path::Path::is_absolute(v10, v7) )
      {
        v15 = *((_QWORD *)&v51 + 1);
        v16 = v52;
        *(_DWORD *)v41 = 0;
        v17 = core::char::methods::encode_utf8_raw(47LL, v41);
        v36 = core::slice::<impl [T]>::ends_with(v15, v16, v17, v18);
        if ( v36 )
        {
          *(_QWORD *)&v41[16] = v52;
          *(_OWORD *)v41 = v51;
          v19 = 1LL;
          v47 = 0LL;
          v20 = 0LL;
          v21 = 0LL;
        }
        else
        {
          v22 = *((_QWORD *)&v51 + 1);
          v23 = v52;
          *(_QWORD *)&v24 = std::path::Path::parent(*((_QWORD *)&v51 + 1), v52);
          if ( (_QWORD)v24 )
          {
            *(_OWORD *)v41 = v24;
            <T as alloc::string::ToString>::to_string(&v38, v41);
          }
          else
          {
            *(_QWORD *)&v38 = 0LL;
            *((_QWORD *)&v38 + 1) = 1LL;
            v39 = 0LL;
          }
          v25 = std::path::Path::file_name(v22, v23);
          if ( v25 )
          {
            std::sys::os_str::bytes::Slice::to_str(v41, v25);
            if ( *(_QWORD *)v41 )
              core::option::unwrap_failed(&off_136A58);
            <T as alloc::slice::hack::ConvertVec>::to_vec(v41, *(_QWORD *)&v41[8], *(_QWORD *)&v41[16]);
            v19 = *(_QWORD *)&v41[8];
            v20 = *(_QWORD *)v41;
            v21 = *(_QWORD *)&v41[16];
          }
          else
          {
            v19 = 1LL;
            v20 = 0LL;
            v21 = 0LL;
          }
          v26 = v39;
          *(_QWORD *)&v41[16] = v39;
          *(_OWORD *)v41 = v38;
          LOBYTE(v26) = 1;
          v47 = (__int64)v26;
        }
        v60 = *(_QWORD *)&v41[16];
        v59 = *(_OWORD *)v41;
        *(_QWORD *)&v57 = v20;
        *((_QWORD *)&v57 + 1) = v19;
        v58 = v21;
        v27 = *(_QWORD *)v37;
        if ( *(_QWORD *)v37 == 0x8000000000000000LL )
        {
          v56 = 1uLL;
          v27 = 0LL;
        }
        else
        {
          v56 = *(__int128 *)((char *)a2 + 56);
        }
        v55 = v27;
        v28 = *((_QWORD *)a2 + 1);
        v29 = *((_QWORD *)a2 + 2);
        v30 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v48,
                v28,
                v29);
        if ( !v30 )
          core::str::slice_error_fail(v28, v29, v48, v29, &off_136A70);
        v61[0] = v30;
        v61[1] = v31;
        *(_QWORD *)&v38 = v61;
        *((_QWORD *)&v38 + 1) = <&T as core::fmt::Display>::fmt;
        v39 = &v55;
        v40 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)v41 = &unk_1A7A8;
        *(_QWORD *)&v41[8] = 2LL;
        *(_QWORD *)&v41[32] = 0LL;
        *(_QWORD *)&v41[16] = &v38;
        *(_QWORD *)&v41[24] = 2LL;
        core::option::Option<T>::map_or_else(&v62, v41);
        v45 = v62;
        v46 = v63;
        if ( !(unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(*((_QWORD *)&v62 + 1), v63) )
        {
          v32 = v48 - v7;
          *(_QWORD *)&v41[16] = v60;
          v33 = v59;
          *(_OWORD *)v41 = v59;
          v42 = v58;
          *(_OWORD *)&v41[24] = v57;
          v44 = v46;
          v34 = v45;
          v43 = v45;
          *(_QWORD *)(a1 + 64) = v46;
          *(_OWORD *)(a1 + 48) = v34;
          *(_OWORD *)a1 = v33;
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v41[32];
          *(_QWORD *)(a1 + 40) = v42;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v41[16];
          *(_QWORD *)(a1 + 72) = v32;
          core::ptr::drop_in_place<alloc::string::String>(&v55);
          if ( !v36 )
            core::ptr::drop_in_place<alloc::string::String>(&v51);
          core::ptr::drop_in_place<std::path::PathBuf>(&v49);
          core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v53);
LABEL_49:
          core::ptr::drop_in_place<alloc::string::String>(a2);
          return a1;
        }
        *(_QWORD *)(a1 + 24) = v46;
        *(_OWORD *)(a1 + 8) = v45;
        *(_QWORD *)(a1 + 32) = 0x8000000000000004LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::string::String>(&v55);
        core::ptr::drop_in_place<alloc::string::String>(&v57);
        core::ptr::drop_in_place<alloc::string::String>(&v59);
        v8 = 1;
        v14 = 0;
        if ( v36 )
        {
LABEL_42:
          core::ptr::drop_in_place<std::path::PathBuf>(&v49);
          core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v53);
          if ( !v14 )
            goto LABEL_44;
          goto LABEL_43;
        }
LABEL_41:
        core::ptr::drop_in_place<alloc::string::String>(&v51);
        goto LABEL_42;
      }
      v13 = 0x8000000000000005LL;
    }
    *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 2);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_QWORD *)(a1 + 32) = v13;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    v14 = 1;
    v8 = 0;
    goto LABEL_41;
  }
  *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 2);
  *(_OWORD *)(a1 + 8) = *a2;
  *(_QWORD *)(a1 + 32) = 0x8000000000000001LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>((char *)a2 + 24);
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v37);
  return a1;
}
