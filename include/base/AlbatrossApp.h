#ifndef ALBATROSSAPP_H
#define ALBATROSSAPP_H

#include "MooseApp.h"

class AlbatrossApp;

template<>
InputParameters validParams<AlbatrossApp>();

class AlbatrossApp : public MooseApp
{
public:
  AlbatrossApp(InputParameters parameters);
  virtual ~AlbatrossApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* ALBATROSSAPP_H */
