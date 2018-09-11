#ifndef A_CLASS_H
#define A_CLASS_H

#include <ns3/core-module.h>

namespace ns3 {

class A : public object
{
public:
  A();            //!< Default constructor
  virtual ~A();  //!< Dummy destructor, see DoDispose

  /**
   * Register this type.
   * \return the object Type.
   */
  static TypeId GetTypeId (void);

protected:
  /** Destructor implementation. */
  virtual void NotifyConstructionCompleted (void);

private:
  Ptr<b> m_att1;
  int


} // namespace ns3
#endif // A_CLASS_H
