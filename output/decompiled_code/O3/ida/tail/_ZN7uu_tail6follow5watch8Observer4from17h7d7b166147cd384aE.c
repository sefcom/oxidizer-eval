__int64 __fastcall uu_tail::follow::watch::Observer::from(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __pid_t v8; // ebp
  unsigned __int64 v9; // r14
  __pid_t v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  char v14; // [rsp+5h] [rbp-83h]
  char v15; // [rsp+6h] [rbp-82h]
  char v16; // [rsp+7h] [rbp-81h]
  __int128 v17; // [rsp+8h] [rbp-80h]
  _OWORD v18[2]; // [rsp+18h] [rbp-70h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+48h] [rbp-40h]

  v15 = *(_BYTE *)(a2 + 72);
  v16 = *(_BYTE *)(a2 + 73);
  v14 = *(_BYTE *)(a2 + 76);
  v2 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(__readfsqword(0) - 72) )
  {
    v3 = __readfsqword(0) - 72;
    v4 = *(_QWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v4 = std::sys::pal::unix::rand::hashmap_random_keys();
    v5 = v6;
    v7 = (_QWORD *)(__readfsqword(0) - 72);
    *v7 = 1LL;
    v7[2] = v6;
  }
  *(_QWORD *)(__readfsqword(0) - 72 + 8) = v4 + 1;
  hashbrown::raw::RawTable<T,A>::with_capacity_in((char *)v18 + 8, v2);
  *((_QWORD *)&v19 + 1) = v4;
  *(_QWORD *)&v20 = v5;
  *(_QWORD *)&v17 = 0x8000000000000000LL;
  WORD4(v20) = *(unsigned __int8 *)(a2 + 74);
  v8 = *(_DWORD *)(a2 + 68);
  if ( !kill(v8, 0)
    || (v9 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2,
        core::ptr::drop_in_place<std::io::error::Error>(v9),
        v10 = 0,
        HIDWORD(v9) != 38) )
  {
    v10 = v8;
  }
  *(_OWORD *)(a1 + 120) = v20;
  v11 = v18[0];
  v12 = v18[1];
  *(_OWORD *)(a1 + 104) = v19;
  *(_OWORD *)(a1 + 88) = v12;
  *(_OWORD *)(a1 + 72) = v11;
  *(_OWORD *)(a1 + 56) = v17;
  *(_BYTE *)(a1 + 140) = v15;
  *(_BYTE *)(a1 + 142) = v14;
  *(_BYTE *)(a1 + 141) = v16;
  *(_QWORD *)a1 = 3LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 8LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 136) = v10;
  return a1;
}
