__int64 __fastcall bat::syntax_mapping::SyntaxMapping::get_syntax_for(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 *v13; // rdx
  __int64 v14; // r12
  __int128 *v15; // r15
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int128 v23; // [rsp+20h] [rbp-148h] BYREF
  _OWORD v24[3]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v25; // [rsp+60h] [rbp-108h]
  _OWORD v26[4]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-B8h]
  __int128 v28; // [rsp+C0h] [rbp-A8h]
  _OWORD v29[2]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v30[120]; // [rsp+F0h] [rbp-78h] BYREF

  globset::Candidate::new(v30, a3, a4);
  v6 = <&T as core::convert::AsRef<U>>::as_ref(a3, a4);
  v8 = std::path::Path::file_name(v6, v7);
  if ( v8 )
  {
    globset::Candidate::new(&v23, v8, v9, 0x8000000000000001LL);
    v27 = v25;
    v26[3] = v24[2];
    v26[2] = v24[1];
    v26[1] = v24[0];
    v26[0] = v23;
  }
  else
  {
    *(_QWORD *)&v26[0] = 0x8000000000000001LL;
  }
  bat::syntax_mapping::SyntaxMapping::all_mappings(v29, a2);
  v24[0] = v29[1];
  v23 = v29[0];
  while ( 1 )
  {
    v10 = core::iter::adapters::chain::and_then_or_clear(&v23);
    v12 = core::option::Option<T>::or_else(v10, v11, v24);
    v14 = v12;
    if ( !v12 )
      break;
    v15 = v13;
    if ( (unsigned __int8)globset::glob::GlobMatcher::is_match_candidate(v12, v30)
      || *(_QWORD *)&v26[0] != 0x8000000000000001LL
      && (unsigned __int8)globset::glob::GlobMatcher::is_match_candidate(v14, v26) )
    {
      v16 = *v15;
      *(_QWORD *)(a1 + 16) = *((_QWORD *)v15 + 2);
      *(_OWORD *)a1 = v16;
      goto LABEL_16;
    }
  }
  v17 = <&T as core::convert::AsRef<U>>::as_ref(a3, a4);
  v19 = std::path::Path::file_name(v17, v18);
  if ( !v19 )
    goto LABEL_15;
  bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix(&v23, a2 + 24, v19, v20);
  if ( (_BYTE)v23 != 13 )
  {
    core::ptr::drop_in_place<core::result::Result<bat::assets::SyntaxReferenceInSet,bat::error::Error>>(&v23);
    goto LABEL_15;
  }
  v21 = *((_QWORD *)&v23 + 1);
  v28 = v24[0];
  if ( *((_QWORD *)&v23 + 1) == 4LL )
  {
LABEL_15:
    *(_QWORD *)a1 = 3LL;
    goto LABEL_16;
  }
  *(_OWORD *)(a1 + 8) = v28;
  *(_QWORD *)a1 = v21;
LABEL_16:
  core::ptr::drop_in_place<core::option::Option<globset::Candidate>>(v26);
  return core::ptr::drop_in_place<globset::Candidate>(v30);
}