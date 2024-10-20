__int64 __fastcall uu_test::parser::Symbol::into_literal(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  const char *v3; // rsi
  __int128 v5; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  switch ( *a2 )
  {
    case 0LL:
      v3 = "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
      goto LABEL_7;
    case 1LL:
      v3 = "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
LABEL_7:
      std::sys::os_str::bytes::Slice::to_owned(&v5, v3, 1LL);
      goto LABEL_8;
    case 2LL:
    case 3LL:
      v2 = 1LL;
      goto LABEL_4;
    case 4LL:
    case 5LL:
      v2 = 2LL;
LABEL_4:
      v7 = a2[v2 + 2];
      v5 = *(_OWORD *)&a2[v2];
      v6 = v7;
LABEL_8:
      *(_QWORD *)(a1 + 24) = v6;
      *(_OWORD *)(a1 + 8) = v5;
      *(_QWORD *)a1 = 3LL;
      return a1;
    case 6LL:
      uu_test::parser::Symbol::into_literal::panic_cold_explicit();
  }
}
