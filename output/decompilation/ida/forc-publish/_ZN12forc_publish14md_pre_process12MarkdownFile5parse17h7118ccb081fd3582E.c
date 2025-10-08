__int64 __fastcall forc_publish::md_pre_process::MarkdownFile::parse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // xmm0
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  const char *v12; // rbp
  __int128 v13; // [rsp+0h] [rbp-208h] BYREF
  __int64 v14; // [rsp+10h] [rbp-1F8h]
  __int128 v15; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-1D8h]
  _BYTE v17[24]; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-1B0h]
  _OWORD dest[9]; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-118h]
  __int64 v21; // [rsp+F8h] [rbp-110h]
  const char *v22; // [rsp+100h] [rbp-108h]
  __int64 v23; // [rsp+108h] [rbp-100h]
  _OWORD src[9]; // [rsp+110h] [rbp-F8h] BYREF
  _OWORD v25[6]; // [rsp+1A8h] [rbp-60h] BYREF

  v4 = <&T as core::convert::AsRef<U>>::as_ref(a2, a3);
  std::fs::canonicalize(src, v4);
  if ( __OFSUB__(0LL, *(_QWORD *)&src[0]) )
  {
    forc_publish::md_pre_process::MarkdownFile::parse::{{closure}}(dest, a2, a3, *((_QWORD *)&src[0] + 1));
    result = *(_QWORD *)&dest[0];
    v6 = *(_OWORD *)((char *)dest + 8);
    *(_OWORD *)v17 = *(_OWORD *)((char *)dest + 8);
    *(_QWORD *)&v17[16] = *((_QWORD *)&dest[1] + 1);
    v16 = *((_QWORD *)&dest[1] + 1);
    v15 = *(_OWORD *)((char *)dest + 8);
    *(_QWORD *)(a1 + 32) = *((_QWORD *)&dest[1] + 1);
    *(_OWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  v13 = src[0];
  v14 = *(_QWORD *)&src[1];
  std::fs::read_to_string(dest, &v13);
  v7 = *((_QWORD *)&dest[0] + 1);
  if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v8 = *(_QWORD *)&dest[1];
    v15 = dest[0];
    v16 = *(_QWORD *)&dest[1];
    v9 = std::path::Path::parent(*((_QWORD *)&v13 + 1), v14);
    v11 = v10;
    v12 = asc_22AE63;
    if ( v9 )
      v12 = (const char *)v9;
    else
      v11 = 1LL;
    regex::regex::string::Regex::new(dest, aIncludeS, 27LL);
    src[0] = *(_OWORD *)((char *)dest + 8);
    *(_QWORD *)&src[1] = *((_QWORD *)&dest[1] + 1);
    if ( *(_QWORD *)&dest[0] )
    {
      v18 = *(_QWORD *)&src[1];
      *(_OWORD *)&v17[8] = src[0];
      *(_QWORD *)v17 = *(_QWORD *)&dest[0];
      regex_automata::meta::regex::Regex::captures_iter(src, v17, v7, v8);
      memcpy(dest, src, sizeof(dest));
      v20 = v7;
      v21 = v8;
      v22 = v12;
      v23 = v11;
      core::iter::traits::iterator::Iterator::collect(v25, dest);
      *(_QWORD *)&dest[1] = v14;
      dest[0] = v13;
      *(_OWORD *)((char *)&dest[3] + 8) = v25[2];
      *(_OWORD *)((char *)&dest[2] + 8) = v25[1];
      *(_OWORD *)((char *)&dest[1] + 8) = v25[0];
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&dest[4];
      *(_OWORD *)(a1 + 48) = dest[3];
      *(_OWORD *)(a1 + 32) = dest[2];
      *(_OWORD *)(a1 + 16) = dest[1];
      core::ptr::drop_in_place<regex::regex::string::Regex>(v17);
      return core::ptr::drop_in_place<alloc::string::String>(&v15, dest);
    }
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&src[1];
    *(_OWORD *)(a1 + 16) = src[0];
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::string::String>(&v15, aIncludeS);
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(v13, *((_QWORD *)&v13 + 1));
}