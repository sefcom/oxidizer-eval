__int64 __fastcall just::subcommand::Subcommand::list(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a4 + 16);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a4 + 8);
    v8 = 24 * v6;
    v9 = 0LL;
    while ( 1 )
    {
      a3 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(
             *(_QWORD *)(a3 + 672),
             *(_QWORD *)(a3 + 680),
             *(_QWORD *)(v7 + v9 + 8),
             *(_QWORD *)(v7 + v9 + 16));
      if ( !a3 )
        break;
      v9 += 24LL;
      if ( v8 == v9 )
        goto LABEL_5;
    }
    <T as alloc::string::SpecToString>::spec_to_string(&v11, a4);
    result = v11;
    *(_OWORD *)(a1 + 16) = v12;
    *(_BYTE *)a1 = 53;
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
LABEL_5:
    result = just::subcommand::Subcommand::list_module(a2, a3, 0LL);
    *(_BYTE *)a1 = 56;
  }
  return result;
}