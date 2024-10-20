__int64 __fastcall uu_join::State::read_line(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int128 v5; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+0h] [rbp-78h]
  __int64 v9; // [rsp+10h] [rbp-68h]
  _QWORD v10[3]; // [rsp+18h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-48h]
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-28h]

  v4 = 0x8000000000000000LL;
  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(v10, a2 + 40);
  *(_QWORD *)&v5 = v10[0];
  if ( v10[0] == 0x8000000000000001LL )
    goto LABEL_4;
  *((_QWORD *)&v5 + 1) = v10[1];
  v6 = v10[2];
  ++*(_QWORD *)(a2 + 80);
  if ( (_QWORD)v5 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v5 + 1);
    v4 = 0x8000000000000001LL;
LABEL_4:
    *(_QWORD *)a1 = v4;
    return v5;
  }
  v8 = v5;
  v9 = v6;
  <uu_join::OneByteSep as uu_join::Separator>::field_ranges(&v12, a3, *((_QWORD *)&v5 + 1), v6, *(_QWORD *)(a2 + 72));
  v11 = v12;
  *(_QWORD *)&v5 = v13;
  if ( v13 > *(_QWORD *)(a2 + 72) )
    *(_QWORD *)(a2 + 72) = v13;
  *(_QWORD *)(a1 + 40) = v9;
  *(_OWORD *)(a1 + 24) = v8;
  *(_OWORD *)a1 = v11;
  *(_QWORD *)(a1 + 16) = v5;
  return v5;
}
