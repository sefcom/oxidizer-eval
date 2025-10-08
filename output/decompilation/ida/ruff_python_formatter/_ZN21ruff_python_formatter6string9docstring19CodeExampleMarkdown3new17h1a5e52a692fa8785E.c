__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleMarkdown::new(__int64 a1)
{
  __int128 v1; // kr00_16
  __int128 v2; // kr10_16
  __int64 result; // rax
  char v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int128 v12; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+20h] [rbp-B8h]
  __int128 v14; // [rsp+30h] [rbp-A8h]
  __int128 v15; // [rsp+40h] [rbp-98h]
  __int64 v16; // [rsp+50h] [rbp-88h]
  __int64 v17; // [rsp+58h] [rbp-80h]
  __int128 v18; // [rsp+60h] [rbp-78h] BYREF
  _OWORD v19[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v20; // [rsp+90h] [rbp-48h]
  __int64 v21; // [rsp+A0h] [rbp-38h]

  ruff_python_formatter::string::docstring::indent_with_suffix(&v12);
  v1 = v12;
  v2 = v13;
  if ( ((unsigned __int8)core::slice::<impl [T]>::starts_with(v13, *((_QWORD *)&v13 + 1), asc_8B761, 3LL)
     || (unsigned __int8)core::slice::<impl [T]>::starts_with(v2, *((_QWORD *)&v2 + 1), asc_8B764, 3LL))
    && (std::sync::poison::once::Once::call_once(
          &unk_5C19E0,
          &ruff_python_formatter::string::docstring::CodeExampleMarkdown::new::FENCE_START),
        regex::regex::string::Regex::captures_at(&v12, v2, *((_QWORD *)&v2 + 1)),
        (_DWORD)v12 != 2) )
  {
    v17 = *((_QWORD *)&v1 + 1);
    v21 = v16;
    v20 = v15;
    v19[1] = v14;
    v19[0] = v13;
    v18 = v12;
    regex_automata::util::captures::Captures::get_group_by_name(&v12, v19, aTicks, 5LL);
    v4 = v12;
    if ( (_QWORD)v12 != 1LL )
    {
      regex_automata::util::captures::Captures::get_group_by_name(&v12, v19, aTilds, 5LL);
      if ( (_DWORD)v12 != 1 )
        core::option::expect_failed("no ticks means it must be tildes.", 32LL, &off_57F438);
    }
    v5 = *((_QWORD *)&v20 + 1);
    v6 = v21;
    v7 = *((_QWORD *)&v12 + 1);
    v8 = v13;
    v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
           *((_QWORD *)&v12 + 1),
           v13,
           *((_QWORD *)&v20 + 1),
           v21);
    if ( !v9 )
      core::str::slice_error_fail(v5, v6, v7, v8, &off_57F450);
    v11 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v9, v9 + v10);
    ruff_python_formatter::string::docstring::Indentation::from_str(&v12, v1, v17);
    *(_QWORD *)(a1 + 40) = v13;
    *(_OWORD *)(a1 + 24) = v12;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 8LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 48) = v11;
    *(_BYTE *)(a1 + 56) = v4 ^ 1;
    return core::ptr::drop_in_place<regex::regex::string::Captures>(&v18);
  }
  else
  {
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}