#ifndef __AVL_H__
#define __AVL_H__

struct AVL_Node
{
	int key;
	struct AVL_Node* left;
	struct AVL_Node* right;
	int height;
	// �ٸ� ��� �߰� ���� 
};

int height(struct AVL_Node* N);

/*
 * AVL_Node�� �Ҵ�
 * ����ü ��� �ʱ�ȭ
 * Ű���� key�� ����
 * ������ AVL_Node ����ü�� �Ҵ�� �ּ� ��ȯ
 * ���н� NULL ��ȯ
 */
struct AVL_Node* AVL_create_node(int key);

struct AVL_Node* AVL_create_node(int key);
struct AVL_Node* rightRotate(struct AVL_Node* y);
int getBalance(struct AVL_Node* N);

/*
 * �Ķ���ͷ� �־��� AVL_Node�� AVL Ʈ���� root ��忡 ����
 * ������ 0 ��ȯ
 * ���н� (Ű�� �ִ� ���) �̿��� �� ��ȯ
 */
int AVL_insert_node(struct AVL_Node** root, struct AVL_Node* new_node);

/*
 * Ʈ���� ������ȸ �ϸ� ����� Ű ���� ������� ���
 * Ű ���� ����ϰ� �� ���� (\t) �� �����Ͽ� ���� Ű�� ����
 */
void AVL_print_keys_preorder(struct AVL_Node* root);

#endif 