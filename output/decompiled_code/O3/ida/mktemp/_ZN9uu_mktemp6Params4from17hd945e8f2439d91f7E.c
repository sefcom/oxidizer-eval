__int64 __fastcall uu_mktemp::Params::from(__int64 a1, __int128 *a2)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  char v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  char v14; // r13
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  _BYTE *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  _BYTE *v23; // r14
  __int64 v24; // rbp
  __int128 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rbp
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  char v37; // [rsp+3h] [rbp-1A5h]
  __int64 *v38; // [rsp+8h] [rbp-1A0h]
  __int128 v39; // [rsp+10h] [rbp-198h] BYREF
  __int64 *v40; // [rsp+20h] [rbp-188h]
  __int64 (__fastcall *v41)(); // [rsp+28h] [rbp-180h]
  _BYTE v42[40]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v43; // [rsp+58h] [rbp-150h]
  __int128 v44; // [rsp+60h] [rbp-148h]
  __int64 v45; // [rsp+70h] [rbp-138h]
  __int128 v46; // [rsp+80h] [rbp-128h] BYREF
  __int64 v47; // [rsp+90h] [rbp-118h]
  _BYTE *v48; // [rsp+A0h] [rbp-108h]
  __int64 v49; // [rsp+A8h] [rbp-100h]
  __int64 v50; // [rsp+B0h] [rbp-F8h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-F0h]
  __int128 v52; // [rsp+C8h] [rbp-E0h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-D0h]
  __int128 v54; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-B8h]
  __int64 v56; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v57; // [rsp+108h] [rbp-A0h]
  __int128 v58; // [rsp+118h] [rbp-90h] BYREF
  __int64 v59; // [rsp+128h] [rbp-80h]
  __int128 v60; // [rsp+130h] [rbp-78h] BYREF
  __int64 v61; // [rsp+140h] [rbp-68h]
  _QWORD v62[2]; // [rsp+150h] [rbp-58h] BYREF
  __int128 v63; // [rsp+160h] [rbp-48h] BYREF
  __int64 v64; // [rsp+170h] [rbp-38h]

  v38 = (__int64 *)(a2 + 3);
  if ( *((_QWORD *)a2 + 6) == 0x8000000000000000LL
    || (v4 = *((_QWORD *)a2 + 1),
        v5 = *((_QWORD *)a2 + 2),
        *(_DWORD *)v42 = 0,
        v6 = core::char::methods::encode_utf8_raw(88LL, v42),
        (unsigned __int8)core::slice::<impl [T]>::ends_with(v4, v5, v6, v7)) )
  {
    uu_mktemp::find_last_contiguous_block_of_xs((__int64 *)&v46, *((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2));
    if ( !(_QWORD)v46 )
    {
      if ( *v38 == 0x8000000000000000LL )
      {
        v40 = (__int64 *)*((_QWORD *)a2 + 2);
        v39 = *a2;
        v9 = 0;
      }
      else
      {
        v10 = *((_QWORD *)a2 + 2);
        *(_QWORD *)v42 = *((_QWORD *)a2 + 1);
        *(_QWORD *)&v42[8] = v10 + *(_QWORD *)v42;
        *(_QWORD *)&v42[16] = v10;
        <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v39, v42);
        v9 = 1;
      }
      *(_QWORD *)(a1 + 24) = v40;
      *(_OWORD *)(a1 + 8) = v39;
      *(_QWORD *)(a1 + 32) = 0x8000000000000002LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>((char *)a2 + 24);
LABEL_43:
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v38);
LABEL_44:
      if ( !v9 )
        return a1;
      goto LABEL_49;
    }
    v8 = *((_QWORD *)&v46 + 1);
    v49 = v47;
    v55 = *((_QWORD *)a2 + 5);
    v54 = *(__int128 *)((char *)a2 + 24);
    if ( (_QWORD)v54 == 0x8000000000000000LL
      || (<alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v42, &v54),
          v39 = *(_OWORD *)&v42[8],
          *(_QWORD *)v42 == 0x8000000000000000LL) )
    {
      v50 = 0LL;
      v51 = 1uLL;
    }
    else
    {
      v51 = v39;
      v50 = *(_QWORD *)v42;
    }
    v11 = *((_QWORD *)a2 + 1);
    if ( v8 )
    {
      v12 = *((_QWORD *)a2 + 2);
      if ( v8 >= v12 )
      {
        if ( v8 != v12 )
LABEL_16:
          core::str::slice_error_fail(*((_QWORD *)a2 + 1), v12, 0LL, v8, &off_136280);
      }
      else if ( *(char *)(v11 + v8) <= -65 )
      {
        goto LABEL_16;
      }
    }
    std::path::Path::join(v42, v51, *((_QWORD *)&v51 + 1), *((_QWORD *)a2 + 1), v8);
    v39 = *(_OWORD *)&v42[8];
    <T as alloc::string::ToString>::to_string(&v52, &v39);
    core::ptr::drop_in_place<std::path::PathBuf>(v42);
    if ( *((_BYTE *)a2 + 75) && (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(v11, v8) )
    {
      v13 = 0x8000000000000003LL;
    }
    else
    {
      if ( (_QWORD)v54 == 0x8000000000000000LL || !(unsigned __int8)std::path::Path::is_absolute(v11, v8) )
      {
        v15 = *((_QWORD *)&v52 + 1);
        v16 = v53;
        *(_DWORD *)v42 = 0;
        v17 = core::char::methods::encode_utf8_raw(47LL, v42);
        v37 = core::slice::<impl [T]>::ends_with(v15, v16, v17, v18);
        if ( v37 )
        {
          *(_QWORD *)&v42[16] = v53;
          *(_OWORD *)v42 = v52;
          v19 = 1LL;
          v20 = 0LL;
          v21 = 0LL;
          v22 = 0LL;
        }
        else
        {
          v23 = (_BYTE *)*((_QWORD *)&v52 + 1);
          v24 = v53;
          *(_QWORD *)&v25 = std::path::Path::parent(*((_QWORD *)&v52 + 1), v53);
          if ( (_QWORD)v25 )
          {
            *(_OWORD *)v42 = v25;
            <T as alloc::string::ToString>::to_string(&v39, v42);
          }
          else
          {
            *(_QWORD *)&v39 = 0LL;
            *((_QWORD *)&v39 + 1) = 1LL;
            v40 = 0LL;
          }
          v20 = v23;
          v26 = std::path::Path::file_name(v23, v24);
          if ( v26 )
          {
            std::sys::os_str::bytes::Slice::to_str(v42, v26);
            if ( *(_QWORD *)v42 )
              core::option::unwrap_failed(&off_136298);
            v20 = v42;
            <T as alloc::slice::hack::ConvertVec>::to_vec(v42, *(_QWORD *)&v42[8], *(_QWORD *)&v42[16]);
            v19 = *(_QWORD *)&v42[8];
            v21 = *(_QWORD *)v42;
            v22 = *(_QWORD *)&v42[16];
          }
          else
          {
            v19 = 1LL;
            v21 = 0LL;
            v22 = 0LL;
          }
          *(_QWORD *)&v42[16] = v40;
          *(_OWORD *)v42 = v39;
          LOBYTE(v20) = 1;
        }
        v61 = *(_QWORD *)&v42[16];
        v60 = *(_OWORD *)v42;
        *(_QWORD *)&v58 = v21;
        *((_QWORD *)&v58 + 1) = v19;
        v59 = v22;
        v27 = *v38;
        v28 = *v38 == 0x8000000000000000LL;
        v48 = v20;
        if ( v28 )
        {
          v57 = 1uLL;
          v27 = 0LL;
        }
        else
        {
          v57 = *(__int128 *)((char *)a2 + 56);
        }
        v56 = v27;
        v29 = *((_QWORD *)a2 + 1);
        v30 = *((_QWORD *)a2 + 2);
        v31 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v49,
                v29,
                v30);
        if ( !v31 )
          core::str::slice_error_fail(v29, v30, v49, v30, &off_1362B0);
        v62[0] = v31;
        v62[1] = v32;
        *(_QWORD *)&v39 = v62;
        *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
        v40 = &v56;
        v41 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)v42 = &unk_1A730;
        *(_QWORD *)&v42[8] = 2LL;
        *(_QWORD *)&v42[32] = 0LL;
        *(_QWORD *)&v42[16] = &v39;
        *(_QWORD *)&v42[24] = 2LL;
        core::option::Option<T>::map_or_else(&v63, v42);
        v46 = v63;
        v47 = v64;
        if ( !(unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(*((_QWORD *)&v63 + 1), v64) )
        {
          v33 = v49 - v8;
          *(_QWORD *)&v42[16] = v61;
          v34 = v60;
          *(_OWORD *)v42 = v60;
          v43 = v59;
          *(_OWORD *)&v42[24] = v58;
          v45 = v47;
          v35 = v46;
          v44 = v46;
          *(_QWORD *)(a1 + 64) = v47;
          *(_OWORD *)(a1 + 48) = v35;
          *(_OWORD *)a1 = v34;
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v42[32];
          *(_QWORD *)(a1 + 40) = v43;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v42[16];
          *(_QWORD *)(a1 + 72) = v33;
          core::ptr::drop_in_place<alloc::string::String>(&v56);
          if ( !v37 )
            core::ptr::drop_in_place<alloc::string::String>(&v52);
          core::ptr::drop_in_place<std::path::PathBuf>(&v50);
          core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v54);
LABEL_49:
          core::ptr::drop_in_place<alloc::string::String>(a2);
          return a1;
        }
        *(_QWORD *)(a1 + 24) = v47;
        *(_OWORD *)(a1 + 8) = v46;
        *(_QWORD *)(a1 + 32) = 0x8000000000000004LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::string::String>(&v56);
        core::ptr::drop_in_place<alloc::string::String>(&v58);
        core::ptr::drop_in_place<alloc::string::String>(&v60);
        v9 = 1;
        v14 = 0;
        if ( v37 )
        {
LABEL_42:
          core::ptr::drop_in_place<std::path::PathBuf>(&v50);
          core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v54);
          if ( !v14 )
            goto LABEL_44;
          goto LABEL_43;
        }
LABEL_41:
        core::ptr::drop_in_place<alloc::string::String>(&v52);
        goto LABEL_42;
      }
      v13 = 0x8000000000000005LL;
    }
    *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 2);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_QWORD *)(a1 + 32) = v13;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    v14 = 1;
    v9 = 0;
    goto LABEL_41;
  }
  *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 2);
  *(_OWORD *)(a1 + 8) = *a2;
  *(_QWORD *)(a1 + 32) = 0x8000000000000001LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>((char *)a2 + 24);
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v38);
  return a1;
}
