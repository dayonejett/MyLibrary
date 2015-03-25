/**
 *  forward_list_node.h
 *
 *  @author Raul Butuc.
 *  @version 1.1.2 25/03/2015
 */

#pragma once

#include "forward_list.h"
#include "forward_list_iterator.h"
#include "forward_list_const_iterator.h"

namespace my_library {

template <class _Tp>
class forward_list_node {

  friend class forward_list<_Tp>;
  friend class forward_list_iterator<_Tp>;
  friend class forward_list_const_iterator<_Tp>;

  private:
    _Tp m_Value;
    forward_list_node<_Tp>* m_pNext;

    forward_list_node(const _Tp&, forward_list_node<_Tp>*);
    ~forward_list_node();
};

template <class _Tp>
forward_list_node<_Tp>::forward_list_node(const _Tp& _value, forward_list_node<_Tp>* _next) : m_Value(_value), m_pNext(_next) {}

template <class _Tp>
forward_list_node<_Tp>::~forward_list_node() {
  delete m_pNext;
}

}
