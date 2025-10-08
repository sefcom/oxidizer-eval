long _ZN9uu_uptime14default_uptime17h6894ccc3fb001882E(void)

{
  long lVar1;
  
  _ZN9uu_uptime10print_time17h85d109f21a0e3885E();
  lVar1 = _ZN9uu_uptime12print_uptime17h3abdc53142303b39E(0);
  if (lVar1 != 0) {
    return lVar1;
  }
  _ZN9uu_uptime12print_nusers17hc92747cb558417ffE(0);
  _ZN9uu_uptime13print_loadavg17h786739790e395d27E();
  return 0;
}