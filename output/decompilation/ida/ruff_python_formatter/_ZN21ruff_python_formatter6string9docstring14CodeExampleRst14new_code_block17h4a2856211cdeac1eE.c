unsigned __int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-78h] BYREF
  __int128 v6; // [rsp+10h] [rbp-68h]
  __int128 v7; // [rsp+20h] [rbp-58h]
  _OWORD v8[4]; // [rsp+30h] [rbp-48h] BYREF

  std::sync::poison::once::Once::call_once(
    &unk_5C19B8,
    &ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block::DIRECTIVE_START);
  LODWORD(v5) = 0;
  *((_QWORD *)&v5 + 1) = a2;
  v6 = a3;
  *(_QWORD *)&v7 = a3;
  BYTE8(v7) = 1;
  regex_automata::util::search::Input::set_span(&v5, a3);
  v8[2] = v7;
  v8[1] = v6;
  v8[0] = v5;
  regex_automata::meta::regex::Regex::search_half(&v5, v8);
  if ( (_QWORD)v5 )
  {
    ruff_python_formatter::string::docstring::Indentation::from_str(&v5, a2, a3);
    result = v6;
    *(_QWORD *)(a1 + 40) = v6;
    *(_OWORD *)(a1 + 24) = v5;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 8LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 48) = 5;
    *(_BYTE *)(a1 + 72) = 1;
  }
  else
  {
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}