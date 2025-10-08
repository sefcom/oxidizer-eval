char __fastcall fd::exec::CommandSet::execute(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  _QWORD v9[2]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+10h] [rbp-28h] BYREF
  __int64 v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+28h] [rbp-10h]
  _QWORD *v13; // [rsp+30h] [rbp-8h]

  v9[0] = a5;
  v9[1] = a6;
  *(_QWORD *)&v10 = a1;
  *((_QWORD *)&v10 + 1) = a1 + 24 * a2;
  v11 = a3;
  v12 = a4;
  v13 = v9;
  return fd::exec::command::execute_commands(&v10, a7, a8);
}