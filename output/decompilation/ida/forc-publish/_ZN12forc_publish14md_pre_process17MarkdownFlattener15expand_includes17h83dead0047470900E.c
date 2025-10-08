__int64 __fastcall forc_publish::md_pre_process::MarkdownFlattener::expand_includes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // rbp
  _OWORD *v12; // rbx
  __int64 i; // r15
  _OWORD *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 inner; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 result; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int128 v34; // [rsp+0h] [rbp-238h] BYREF
  __int64 v35; // [rsp+10h] [rbp-228h]
  __int64 v36; // [rsp+18h] [rbp-220h]
  __int64 v37; // [rsp+20h] [rbp-218h]
  __int64 v38; // [rsp+28h] [rbp-210h]
  __int128 v39; // [rsp+30h] [rbp-208h] BYREF
  __int64 v40; // [rsp+40h] [rbp-1F8h]
  __int128 v41; // [rsp+48h] [rbp-1F0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-1E0h]
  __int64 v43; // [rsp+60h] [rbp-1D8h]
  __int64 v44; // [rsp+68h] [rbp-1D0h]
  __int128 v45; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v46; // [rsp+80h] [rbp-1B8h]
  _OWORD v47[4]; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-170h]
  _OWORD src[9]; // [rsp+D0h] [rbp-168h] BYREF
  _BYTE dest[144]; // [rsp+168h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+1F8h] [rbp-40h]
  __int64 v52; // [rsp+200h] [rbp-38h]

  v43 = a6;
  v36 = a1;
  v8 = std::path::Path::parent(a4, a5);
  v10 = 1LL;
  if ( v8 )
    v10 = v9;
  v44 = v10;
  v11 = asc_22AE63;
  if ( v8 )
    v11 = (const char *)v8;
  *(_QWORD *)&v39 = 0LL;
  *((_QWORD *)&v39 + 1) = 1LL;
  v40 = 0LL;
  regex_automata::meta::regex::Regex::captures_iter(src, a7, a2, a3);
  v12 = src;
  memcpy(dest, src, sizeof(dest));
  v38 = a2;
  v51 = a2;
  v37 = a3;
  v52 = a3;
  for ( i = 0LL; ; i = v16 )
  {
    <regex::regex::string::CaptureMatches as core::iter::traits::iterator::Iterator>::next(v47, dest);
    if ( LODWORD(v47[0]) == 2 )
      break;
    *(_QWORD *)&src[4] = v48;
    src[3] = v47[3];
    src[2] = v47[2];
    src[1] = v47[1];
    src[0] = v47[0];
    regex_automata::util::captures::Captures::get_group(&v34, &src[1]);
    if ( (v34 & 1) == 0 )
      core::option::unwrap_failed(&off_E53F58);
    v14 = v12;
    v15 = *((_QWORD *)&v34 + 1);
    v16 = v35;
    v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            i,
            *((_QWORD *)&v34 + 1),
            v38,
            v37);
    if ( !v17 )
      core::str::slice_error_fail(v38, v37, i, v15, &off_E53F70);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v39,
      v17,
      v17 + v18);
    v12 = v14;
    v19 = <regex::regex::string::Captures as core::ops::index::Index<usize>>::index(v14, 1LL, &off_E53F88);
    v21 = core::str::<impl str>::trim_matches(v19, v20);
    std::path::Path::join(&v41, v11, v44, v21, v22);
    v23 = *((_QWORD *)&v41 + 1);
    v24 = *((_QWORD *)&v41 + 1);
    std::fs::canonicalize(&v45, *((_QWORD *)&v41 + 1));
    if ( __OFSUB__(0LL, (_QWORD)v45) )
    {
      v32 = v36;
      *(_QWORD *)(v36 + 24) = v42;
      *(_OWORD *)(v32 + 8) = v41;
      *(_QWORD *)v32 = 4LL;
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v45);
LABEL_16:
      core::ptr::drop_in_place<regex::regex::string::Captures>(src);
      core::ptr::drop_in_place<regex::regex::string::CaptureMatches>(dest);
      return core::ptr::drop_in_place<alloc::string::String>(&v39, v24);
    }
    v35 = v46;
    v34 = v45;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v43, &v34);
    if ( !inner )
    {
      v33 = v36;
      *(_QWORD *)(v36 + 24) = v35;
      *(_OWORD *)(v33 + 8) = v34;
      *(_QWORD *)v33 = 2LL;
      v24 = v23;
      core::ptr::drop_in_place<std::path::PathBuf>(v41, v23);
      goto LABEL_16;
    }
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v39,
      *(_QWORD *)(inner + 32),
      *(_QWORD *)(inner + 32) + *(_QWORD *)(inner + 40));
    core::ptr::drop_in_place<std::path::PathBuf>(v34, *((_QWORD *)&v34 + 1));
    core::ptr::drop_in_place<std::path::PathBuf>(v41, v23);
    core::ptr::drop_in_place<regex::regex::string::Captures>(v14);
  }
  core::ptr::drop_in_place<regex::regex::string::CaptureMatches>(dest);
  v26 = v37;
  v27 = v38;
  v28 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          i,
          v38,
          v37);
  if ( !v28 )
    core::str::slice_error_fail(v27, v26, i, v26, &off_E53F40);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v39,
    v28,
    v28 + v29);
  result = v40;
  v31 = v36;
  *(_QWORD *)(v36 + 24) = v40;
  *(_OWORD *)(v31 + 8) = v39;
  *(_QWORD *)v31 = 6LL;
  return result;
}