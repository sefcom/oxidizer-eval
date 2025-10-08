unsigned __int64 __fastcall alacritty::input::Processor<T,A>::on_touch_start(__int64 a1, __int128 *a2)
{
  __int64 v4; // r14
  __int128 *v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int128 v9; // xmm2
  char v10; // di
  __int16 *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rsi
  char v14; // r13
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  unsigned __int64 result; // rax
  __int16 v18; // [rsp+Ch] [rbp-BCh]
  char v19; // [rsp+Eh] [rbp-BAh]
  _BYTE v20[48]; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-88h]
  __int64 v22; // [rsp+48h] [rbp-80h]
  __int64 v23; // [rsp+58h] [rbp-70h]
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int128 v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+80h] [rbp-48h]

  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::touch_purpose();
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (__int128 *)(a1 + 16);
  v6 = *(_OWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(unsigned __int64 *)(a1 + 64);
  v10 = *(_BYTE *)(a1 + 68);
  v11 = (__int16 *)(a1 + 69);
  v12 = *(_QWORD *)(a1 + 112);
  v13 = 3LL;
  if ( (unsigned __int64)(*(_QWORD *)a1 - 4LL) < 7 )
    v13 = *(_QWORD *)a1 - 4LL;
  *(_QWORD *)a1 = 4LL;
  switch ( v13 )
  {
    case 0LL:
      v26 = *a2;
      v25 = a2[1];
      v7 = *((_QWORD *)a2 + 4);
      v8 = *((_QWORD *)a2 + 5);
      v24 = *((unsigned __int64 *)a2 + 6);
      v14 = *((_BYTE *)a2 + 52);
      v19 = *((_BYTE *)a2 + 55);
      v18 = *(_WORD *)((char *)a2 + 53);
      v23 = *((_QWORD *)a2 + 7);
      v4 = 9LL;
      goto LABEL_10;
    case 1LL:
    case 2LL:
      <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v20);
      hashbrown::map::HashMap<K,V,S,A>::insert(v20, v8);
      goto LABEL_9;
    case 3LL:
      <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v20);
      hashbrown::map::HashMap<K,V,S,A>::insert(v20, v7);
      hashbrown::map::HashMap<K,V,S,A>::insert(v20, v12);
      goto LABEL_9;
    case 4LL:
    case 5LL:
      v26 = *v5;
      v18 = *v11;
      v19 = *(_BYTE *)(a1 + 71);
      v23 = *(_QWORD *)a2;
      *(_OWORD *)v20 = *(__int128 *)((char *)a2 + 8);
      *(_OWORD *)&v20[16] = *(__int128 *)((char *)a2 + 24);
      *(_OWORD *)&v20[32] = *(__int128 *)((char *)a2 + 40);
      v21 = *((_QWORD *)a2 + 7);
      v25 = v6;
      v24 = v9;
      v14 = v10;
      goto LABEL_10;
    case 6LL:
      *(_QWORD *)v20 = v4;
      *(_OWORD *)&v20[8] = *v5;
      *(_OWORD *)&v20[24] = v6;
      *(_QWORD *)&v20[40] = v7;
      v21 = v8;
      LODWORD(v22) = v9;
      BYTE4(v22) = v10;
      *(_WORD *)((char *)&v22 + 5) = *v11;
      HIBYTE(v22) = *(_BYTE *)(a1 + 71);
      hashbrown::map::HashMap<K,V,S,A>::insert(v20, *((_QWORD *)a2 + 6));
LABEL_9:
      v26 = *(_OWORD *)v20;
      v25 = *(_OWORD *)&v20[16];
      v8 = *(_QWORD *)&v20[40];
      v7 = *(_QWORD *)&v20[32];
      v24 = v21;
      v14 = BYTE4(v21);
      v18 = *(_WORD *)((char *)&v21 + 5);
      v19 = HIBYTE(v21);
      v23 = v22;
      v4 = 10LL;
LABEL_10:
      core::ptr::drop_in_place<alacritty::event::TouchPurpose>(a1);
      *(_QWORD *)a1 = v4;
      *(_OWORD *)(a1 + 8) = v26;
      *(_OWORD *)(a1 + 24) = v25;
      *(_QWORD *)(a1 + 40) = v7;
      *(_QWORD *)(a1 + 48) = v8;
      *(_DWORD *)(a1 + 56) = v24;
      *(_BYTE *)(a1 + 60) = v14;
      *(_WORD *)(a1 + 61) = v18;
      *(_BYTE *)(a1 + 63) = v19;
      *(_QWORD *)(a1 + 64) = v23;
      v15 = *(_OWORD *)&v20[16];
      v16 = *(_OWORD *)&v20[32];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)v20;
      *(_OWORD *)(a1 + 88) = v15;
      *(_OWORD *)(a1 + 104) = v16;
      result = v21;
      *(_QWORD *)(a1 + 120) = v21;
      *(_DWORD *)(a1 + 128) = 0;
      return result;
  }
}