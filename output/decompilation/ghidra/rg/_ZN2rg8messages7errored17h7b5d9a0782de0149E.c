bool _ZN2rg8messages7errored17h7b5d9a0782de0149E(void)

{
  char cVar1;
  
  cVar1 = _ZN4core4sync6atomic11atomic_load17h529993013ff7d57cE
                    (&_ZN2rg8messages7ERRORED17h2048da74b4d28974E,0);
  return cVar1 != '\0';
}